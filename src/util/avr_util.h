#ifndef AVR_UTIL_H_
#define AVR_UTIL_H_

#include "../avr_config.h"
#include <avr/io.h>
#include <string.h>

#define BAUD_RATE 2400
#define CALCULATED_UBBR ((F_CPU / 16 / BAUD_RATE) - 1)

void usart_init();
void usart_transmit(unsigned char data);
void usart_transmit_string(char* string);
unsigned char usart_receive();

#endif /* AVR_UTIL_H_ */