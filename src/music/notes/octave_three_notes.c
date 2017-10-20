#include "octave_three_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C3 = {.freq_hz = 131, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 131)};
struct Note CSHARP3 = {.freq_hz = 139, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 139)};
struct Note D3 = {.freq_hz = 147, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 147)};
struct Note DSHARP3 = {.freq_hz = 156, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 156)};
struct Note E3 = {.freq_hz = 165, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 165)};
struct Note F3 = {.freq_hz = 175, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 175)};
struct Note FSHARP3 = {.freq_hz = 185, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 185)};
struct Note G3 = {.freq_hz = 196, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 196)};
struct Note GSHARP3 = {.freq_hz = 208, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 208)};
struct Note A3 = {.freq_hz = 220, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 220)};
struct Note ASHARP3 = {.freq_hz = 233, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 233)};
struct Note B3 = {.freq_hz = 247, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 247)};