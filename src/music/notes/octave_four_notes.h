#ifndef OCTAVE_FOUR_NOTES_H_
#define OCTAVE_FOUR_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C4_INIT { .freq_hz = (uint16_t) 262, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 262) }
#define CSHARP4_INIT { .freq_hz = (uint16_t) 277, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 277) }
#define D4_INIT { .freq_hz = (uint16_t) 294, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 294) }
#define DSHARP4_INIT { .freq_hz = (uint16_t) 311, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 311) }
#define E4_INIT { .freq_hz = (uint16_t) 330, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 330) }
#define F4_INIT { .freq_hz = (uint16_t) 349, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 349) }
#define FSHARP4_INIT { .freq_hz = (uint16_t) 370, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 370) }
#define G4_INIT { .freq_hz = (uint16_t) 392, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 392) }
#define GSHARP4_INIT { .freq_hz = (uint16_t) 415, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 415) }
#define A4_INIT { .freq_hz = (uint16_t) 440, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 440) }
#define ASHARP4_INIT { .freq_hz = (uint16_t) 466, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 466) }
#define B4_INIT { .freq_hz = (uint16_t) 494, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 494) }

#endif /* OCTAVE_FOUR_NOTES_H_ */