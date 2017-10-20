#include "octave_four_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C4 = {.freq_hz = 262, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 262)};
struct Note CSHARP4 = {.freq_hz = 277, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 277)};
struct Note D4 = {.freq_hz = 294, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 294)};
struct Note DSHARP4 = {.freq_hz = 311, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 311)};
struct Note E4 = {.freq_hz = 330, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 330)};
struct Note F4 = {.freq_hz = 349, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 349)};
struct Note FSHARP4 = {.freq_hz = 370, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 370)};
struct Note G4 = {.freq_hz = 392, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 392)};
struct Note GSHARP4 = {.freq_hz = 415, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 415)};
struct Note A4 = {.freq_hz = 440, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 440)};
struct Note ASHARP4 = {.freq_hz = 466, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 466)};
struct Note B4 = {.freq_hz = 494, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 494)};