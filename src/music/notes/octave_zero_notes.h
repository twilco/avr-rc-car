#ifndef OCTAVE_ZERO_NOTES_H_
#define OCTAVE_ZERO_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C0_INIT { .freq_hz = (uint8_t) 16, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 16) }
#define CSHARP0_INIT { .freq_hz = (uint8_t) 17, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 17) }
#define D0_INIT { .freq_hz = (uint8_t) 18, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 18) }
#define DSHARP0_INIT { .freq_hz = (uint8_t) 19, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 19) }
#define E0_INIT { .freq_hz = (uint8_t) 21, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 21) }
#define F0_INIT { .freq_hz = (uint8_t) 22, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 22) }
#define FSHARP0_INIT { .freq_hz = (uint8_t) 23, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 23) }
#define G0_INIT { .freq_hz = (uint8_t) 25, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 25) }
#define GSHARP0_INIT { .freq_hz = (uint8_t) 26, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 26) }
#define A0_INIT { .freq_hz = (uint8_t) 28, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 28) }
#define ASHARP0_INIT { .freq_hz = (uint8_t) 29, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 29) }
#define B0_INIT { .freq_hz = (uint8_t) 31, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 31) }

#endif /* OCTAVE_ZERO_NOTES_H_ */