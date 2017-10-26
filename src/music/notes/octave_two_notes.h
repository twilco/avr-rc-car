#ifndef OCTAVE_TWO_NOTES_H_
#define OCTAVE_TWO_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C2_INIT { .freq_hz = (uint8_t) 65, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 65) }
#define CSHARP2_INIT { .freq_hz = (uint8_t) 69, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 69) }
#define D2_INIT { .freq_hz = (uint8_t) 73, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 73) }
#define DSHARP2_INIT { .freq_hz = (uint8_t) 78, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 78) }
#define E2_INIT { .freq_hz = (uint8_t) 82, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 82) }
#define F2_INIT { .freq_hz = (uint8_t) 87, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 87) }
#define FSHARP2_INIT { .freq_hz = (uint8_t) 92, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 92) }
#define G2_INIT { .freq_hz = (uint8_t) 98, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 98) }
#define GSHARP2_INIT { .freq_hz = (uint8_t) 104, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 104) }
#define A2_INIT { .freq_hz = (uint8_t) 110, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 110) }
#define ASHARP2_INIT { .freq_hz = (uint8_t) 117, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 117) }
#define B2_INIT { .freq_hz = (uint8_t) 123, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 123) }

#endif /* OCTAVE_TWO_NOTES_H_ */