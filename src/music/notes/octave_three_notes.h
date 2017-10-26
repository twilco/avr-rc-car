#ifndef OCTAVE_THREE_NOTES_H_
#define OCTAVE_THREE_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C3_INIT { .freq_hz = (uint8_t) 131, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 131) }
#define CSHARP3_INIT { .freq_hz = (uint8_t) 139, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 139) }
#define D3_INIT { .freq_hz = (uint8_t) 147, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 147) }
#define DSHARP3_INIT { .freq_hz = (uint8_t) 156, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 156) }
#define E3_INIT { .freq_hz = (uint8_t) 165, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 165) }
#define F3_INIT { .freq_hz = (uint8_t) 175, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 175) }
#define FSHARP3_INIT { .freq_hz = (uint8_t) 185, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 185) }
#define G3_INIT { .freq_hz = (uint8_t) 196, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 196) }
#define GSHARP3_INIT { .freq_hz = (uint8_t) 208, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 208) }
#define A3_INIT { .freq_hz = (uint8_t) 220, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 220) }
#define ASHARP3_INIT { .freq_hz = (uint8_t) 233, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 233) }
#define B3_INIT { .freq_hz = (uint8_t) 247, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 247) }

#endif /* OCTAVE_THREE_NOTES_H_ */