#ifndef OCTAVE_SEVEN_NOTES_H_
#define OCTAVE_SEVEN_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C7_INIT { .freq_hz = (uint16_t) 2093, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2093) }
#define CSHARP7_INIT { .freq_hz = (uint16_t) 2217, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2217) }
#define D7_INIT { .freq_hz = (uint16_t) 2349, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2349) }
#define DSHARP7_INIT { .freq_hz = (uint16_t) 2489, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2489) }
#define E7_INIT { .freq_hz = (uint16_t) 2637, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2637) }
#define F7_INIT { .freq_hz = (uint16_t) 2794, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2794) }
#define FSHARP7_INIT { .freq_hz = (uint16_t) 2960, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2960) }
#define G7_INIT { .freq_hz = (uint16_t) 3136, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3136) }
#define GSHARP7_INIT { .freq_hz = (uint16_t) 3322, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3322) }
#define A7_INIT { .freq_hz = (uint16_t) 3520, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3520) }
#define ASHARP7_INIT { .freq_hz = (uint16_t) 3729, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3729) }
#define B7_INIT { .freq_hz = (uint16_t) 3951, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3951) }

#endif /* OCTAVE_SEVEN_NOTES_H_ */