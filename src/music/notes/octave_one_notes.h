#ifndef OCTAVE_ONE_NOTES_H_
#define OCTAVE_ONE_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C1_INIT { .freq_hz = (uint8_t) 33, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 33) }
#define CSHARP1_INIT { .freq_hz = (uint8_t) 35, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 35) }
#define D1_INIT { .freq_hz = (uint8_t) 37, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 37) }
#define DSHARP1_INIT { .freq_hz = (uint8_t) 39, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 39) }
#define E1_INIT { .freq_hz = (uint8_t) 41, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 41) }
#define F1_INIT { .freq_hz = (uint8_t) 44, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 44) }
#define FSHARP1_INIT { .freq_hz = (uint8_t) 46, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 46) }
#define G1_INIT { .freq_hz = (uint8_t) 49, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 49) }
#define GSHARP1_INIT { .freq_hz = (uint8_t) 52, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 52) }
#define A1_INIT { .freq_hz = (uint8_t) 55, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 55) }
#define ASHARP1_INIT { .freq_hz = (uint8_t) 58, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 58) }
#define B1_INIT { .freq_hz = (uint8_t) 62, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 62) }

#endif /* OCTAVE_ONE_NOTES_H_ */