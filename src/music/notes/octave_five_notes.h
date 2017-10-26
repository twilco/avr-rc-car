#ifndef OCTAVE_FIVE_NOTES_H_
#define OCTAVE_FIVE_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C5_INIT { .freq_hz = (uint16_t) 523, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 523) }
#define CSHARP5_INIT { .freq_hz = (uint16_t) 554, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 554) }
#define D5_INIT { .freq_hz = (uint16_t) 587, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 587) }
#define DSHARP5_INIT { .freq_hz = (uint16_t) 622, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 622) }
#define E5_INIT { .freq_hz = (uint16_t) 659, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 659) }
#define F5_INIT { .freq_hz = (uint16_t) 698, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 698) }
#define FSHARP5_INIT { .freq_hz = (uint16_t) 740, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 740) }
#define G5_INIT { .freq_hz = (uint16_t) 784, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 784) }
#define GSHARP5_INIT { .freq_hz = (uint16_t) 831, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 831) }
#define A5_INIT { .freq_hz = (uint16_t) 880, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 880) }
#define ASHARP5_INIT { .freq_hz = (uint16_t) 932, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 932) }
#define B5_INIT { .freq_hz = (uint16_t) 988, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 988) }

#endif /* OCTAVE_FIVE_NOTES_H_ */