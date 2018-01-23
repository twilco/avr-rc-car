#include "avr_util.h"

void usart_init() 
{
    /*
     UBRR is a 16-bit register, but only the 4 least significant bits of UBBR0H are valid.
     Let's put our calculated baud rate into these registers.
    */
    UBRR0H = (CALCULATED_UBBR >> 8);
    UBRR0L = (CALCULATED_UBBR & 0xFF);
    
    /*
      Set the RXEN0 bit in the USART control register B to enable receiving data off the RX pin.
      Set the TXEN0 bit to enable transmission of the TX pin.
      Set the RXCIE0 to enable the RX Complete interrupt.
    */
    UCSR0B = (1 << RXEN0) | (1 << TXEN0) | (1 << RXCIE0);
    
    /*
      Set these bits to set 8-bits in the USART control register C to set a character size of 8.
    */
    UCSR0C = (1 << UCSZ00) | (1 << UCSZ01);
}

void usart_transmit(unsigned char data) 
{
    // Wait for transmit buffer to be empty
    while ( !(UCSR0A & (1 << UDRE0)) );
    
    UDR0 = data;
}

void usart_transmit_string(char* string) 
{
    for(uint8_t i = 0; i < strlen(string); i++) {
        usart_transmit(string[i]);
    }
}

unsigned char usart_receive()
{
    /* Wait for data to be received */
    while ( !(UCSR0A & (1<<RXC0)) )
    ;
    /* Get and return received data from buffer */
    return UDR0;
}