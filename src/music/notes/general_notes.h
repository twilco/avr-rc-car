#ifndef GENERAL_NOTES_H_
#define GENERAL_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

#define MAX_16_BIT_UNSIGNED (uint16_t) 65535

/* 
    Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time constant in a Song_Note (or whatever other struct consumes it)...
    Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define NO_NOISE_INIT { .freq_hz = (uint8_t) 0, .ocr_val = MAX_16_BIT_UNSIGNED }

#endif /* GENERAL_NOTES_H_ */