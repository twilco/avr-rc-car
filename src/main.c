#include "avr_config.h"

#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
    
    DDRB = (1 << PINB1);
    
    sei();
    /* Set OCIEA to enable Timer1 OCR1A compare match interrupts */
    TIMSK1 = (1 << TOIE1) | (1 << OCIE1A);

    //Set COM1A0 to toggle OC1A on compare match
    TCCR1A = (1 << COM1A0);
    
    // Calculate frequency
    OCR1A = 0;
    
    /* 
        - Set WGM12 to set CTC mode - TOP is OCR1A, OCR1A is not double buffered
        - Set CS10 to start Timer1 with prescaler of 8 
    */
    TCCR1B = (1 << WGM12) | (1 << CS10);

    while (1)
    {

    }
}

ISR(TIMER1_COMPA_vect)
{
 
}
