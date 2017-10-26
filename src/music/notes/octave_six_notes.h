#ifndef OCTAVE_SIX_NOTES_H_
#define OCTAVE_SIX_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C6_INIT { .freq_hz = (uint16_t) 1047, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1047) }
#define CSHARP6_INIT { .freq_hz = (uint16_t) 1109, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1109) }
#define D6_INIT { .freq_hz = (uint16_t) 1175, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1175) }
#define DSHARP6_INIT { .freq_hz = (uint16_t) 1245, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1245) }
#define E6_INIT { .freq_hz = (uint16_t) 1319, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1319) }
#define F6_INIT { .freq_hz = (uint16_t) 1397, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1397) }
#define FSHARP6_INIT { .freq_hz = (uint16_t) 1480, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1480) }
#define G6_INIT { .freq_hz = (uint16_t) 1568, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1568) }
#define GSHARP6_INIT { .freq_hz = (uint16_t) 1661, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1661) }
#define A6_INIT { .freq_hz = (uint16_t) 1760, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1760) }
#define ASHARP6_INIT { .freq_hz = (uint16_t) 1865, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1865) }
#define B6_INIT { .freq_hz = (uint16_t) 1976, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1976) }

#endif /* OCTAVE_SIX_NOTES_H_ */