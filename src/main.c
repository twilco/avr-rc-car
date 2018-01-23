#include "avr_config.h"
#include "types/packet.h"
#include "util/avr_util.h"
#include "constants/packet_constants.h"

#include <stdbool.h>
#include <avr/io.h>
#include <avr/interrupt.h>

uint8_t increment_or_wrap(uint8_t idx, uint8_t arr_size);
void process_packet(volatile struct Packet packets[]);
void reinit_packet(volatile struct Packet* packet);
void soft_reset();

/* This will be used to hold data received from the transmitter. */
volatile struct Packet tmp_packet = { .open_idx = 0, .is_valid = false };

/* Keeps track of where the next open spot of our packet queue is. */
volatile uint8_t packet_queue_open_idx = 0;

/* A storage place for packets that still need to be processed. */
volatile struct Packet packets_to_process[PACKET_QUEUE_SIZE];

/* Flag indicating whether or not we've found a char indicating the start of a packet. */
volatile bool packet_start_found = false;

// TODO: Implement hard_reset

int main(void)
{
    DDRB = (1 << PINB0) | (1 << PINB1);

    usart_init();
    
    sei();
    /* Set OCIEA to enable Timer1 OCR1A compare match interrupt */
    //TIMSK1 = (1 << OCIE1A);
    
    /* Set TOIE0 to enable Timer0 overflow interrupt */
    //TIMSK0 = (1 << TOIE0);

    //Set COM1A0 to toggle OC1A on compare match
    //TCCR1A = (1 << COM1A0);
    
    // Calculate frequency
    //OCR1A = 0;
    
    /* 
        - Set WGM12 to set CTC mode - TOP is OCR1A, OCR1A is not double buffered
        - Set CS10 to start Timer1 with prescaler of 8 
    */
    //TCCR1B = (1 << WGM12) | (1 << CS10);
    
    // Start Timer0 with prescaler of 8
    TCCR0B = (1 << CS01);

    while (1)
    {
        process_packet(packets_to_process);
    }
}


// This interrupt is fired when there is unread data in the UDR register.
ISR(USART_RX_vect)
{
    unsigned char rx_data = UDR0;
    
    if(packet_start_found) {
        // If we've already found a START_CHAR, this byte must be a data or checksum byte.
        uint8_t current_byte_num = (tmp_packet.open_idx + 1);
        if(current_byte_num > PACKET_SIZE) {
            //something is wrong here - let's reset and try to recover
            soft_reset();
        } else if(current_byte_num == CHECKSUM_BYTE_POS) {
            // If we're at the checksum byte, we must've already stored all data bytes.  Let's add them together and see if they match the checksum byte we received
            uint8_t checksum = 0;
            for(uint8_t i = 0; i < NUM_DATA_BYTES; i++) {
                checksum += tmp_packet.data[i];
            }
            
            if(checksum == rx_data) {
                // The checksums match - our packet is valid!  Let's add it to the queue to be processed.
                tmp_packet.is_valid = true;
                packets_to_process[packet_queue_open_idx] = tmp_packet;
                packet_queue_open_idx = increment_or_wrap(packet_queue_open_idx, PACKET_QUEUE_SIZE);
            } else {
                // Checksum didn't match - must be an invalid packet
                reinit_packet(&tmp_packet);
            }
            packet_start_found = false;
        } else {
            // If we haven't reached the checksum byte yet, this must be a data byte.
            tmp_packet.data[tmp_packet.open_idx++] = rx_data;
        }
    } else {
        if(rx_data == START_CHAR) {
            // assuming we didn't just randomly pick up a noise START_CHAR, the following bytes will be data bytes - let's start processing
            packet_start_found = true;
        }
    }
}

ISR(TIMER0_OVF_vect)
{
    
}

uint8_t increment_or_wrap(uint8_t idx, uint8_t arr_size)
{
    // if the index is one less than the array size, incrementing it pushes it out of bounds  
    // let's wrap the index to the beginning spot
    if(idx == (arr_size - 1)) {
        return 0;
    }
    return (idx + 1);
}

void process_packet(volatile struct Packet packets[])
{
    for(uint8_t i = 0; i < PACKET_QUEUE_SIZE; i++) {
        if(packets[i].is_valid) {
            //do something with the valid data
            for(int j = 0; j < PACKET_SIZE; j++) {
                usart_transmit(packets[i].data[j]);
            }
          
            //now that we're done processing the packet, let's get rid of it
            reinit_packet(&packets[i]);
        }
    }
}

void reinit_packet(volatile struct Packet* packet)
{
    for(uint8_t i = 0; i < PACKET_SIZE; i++) {
        packet->data[i] = 0;
    }
    packet->is_valid = false;
    packet->open_idx = 0;
}

void soft_reset()
{
    packet_queue_open_idx = 0;
    packet_start_found = false;
    
    reinit_packet(&tmp_packet);
    
    for(uint8_t i = 0; i < PACKET_QUEUE_SIZE; i++) {
        reinit_packet(&packets_to_process[i]);
    }
}