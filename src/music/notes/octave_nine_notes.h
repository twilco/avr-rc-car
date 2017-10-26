#ifndef OCTAVE_NINE_NOTES_H_
#define OCTAVE_NINE_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C9_INIT { .freq_hz = (uint16_t) 8372, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 8372) }
#define CSHARP9_INIT { .freq_hz = (uint16_t) 8870, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 8870) }
#define D9_INIT { .freq_hz = (uint16_t) 9397, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 9397) }
#define DSHARP9_INIT { .freq_hz = (uint16_t) 9956, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 9956) }
#define E9_INIT { .freq_hz = (uint16_t) 10548, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 10548) }
#define F9_INIT { .freq_hz = (uint16_t) 11175, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 11175) }
#define FSHARP9_INIT { .freq_hz = (uint16_t) 11840, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 11840) }
#define G9_INIT { .freq_hz = (uint16_t) 12544, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 12544) }
#define GSHARP9_INIT { .freq_hz = (uint16_t) 13290, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 13290) }
#define A9_INIT { .freq_hz = (uint16_t) 14080, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 14080) }
#define ASHARP9_INIT { .freq_hz = (uint16_t) 14917, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 14917) }
#define B9_INIT { .freq_hz = (uint16_t) 15804, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 15804) }

#endif /* OCTAVE_NINE_NOTES_H_ */