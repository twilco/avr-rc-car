#include "octave_zero_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C0 = {.freq_hz = 16, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 16)};
struct Note CSHARP0 = {.freq_hz = 17, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 17)};
struct Note D0 = {.freq_hz = 18, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 18)};
struct Note DSHARP0 = {.freq_hz = 19, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 19)};
struct Note E0 = {.freq_hz = 21, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 21)};
struct Note F0 = {.freq_hz = 22, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 22)};
struct Note FSHARP0 = {.freq_hz = 23, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 23)};
struct Note G0 = {.freq_hz = 25, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 25)};
struct Note GSHARP0 = {.freq_hz = 26, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 26)};
struct Note A0 = {.freq_hz = 28, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 28)};
struct Note ASHARP0 = {.freq_hz = 29, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 29)};
struct Note B0 = {.freq_hz = 31, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 31)};