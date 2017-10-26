#ifndef OCTAVE_EIGHT_NOTES_H_
#define OCTAVE_EIGHT_NOTES_H_

#include "../notes_util_macros.h"
#include "../../avr_config.h"

/* 
    - Frequency of <note><octave> in hertz is rounded to the nearest int - .5 is rounded up
    - Unfortunately our Note structs need to be #define'd like this in order for C to recognize it as a compile-time
      constant in a Song_Note (or whatever other struct consumes it)...
    - Specifically, it avoids an "initializer element is not constant" compiler error.
*/

#define C8_INIT { .freq_hz = (uint16_t) 4186, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 4186) }
#define CSHARP8_INIT { .freq_hz = (uint16_t) 4435, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 4435) }
#define D8_INIT { .freq_hz = (uint16_t) 4699, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 4699) }
#define DSHARP8_INIT { .freq_hz = (uint16_t) 4978, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 4978) }
#define E8_INIT { .freq_hz = (uint16_t) 5274, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 5274) }
#define F8_INIT { .freq_hz = (uint16_t) 5588, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 5588) }
#define FSHARP8_INIT { .freq_hz = (uint16_t) 5920, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 5920) }
#define G8_INIT { .freq_hz = (uint16_t) 6272, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 6272) }
#define GSHARP8_INIT { .freq_hz = (uint16_t) 6645, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 6645) }
#define A8_INIT { .freq_hz = (uint16_t) 7040, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 7040) }
#define ASHARP8_INIT { .freq_hz = (uint16_t) 7459, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 7459) }
#define B8_INIT { .freq_hz = (uint16_t) 7902, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 7902) }

#endif /* OCTAVE_EIGHT_NOTES_H_ */