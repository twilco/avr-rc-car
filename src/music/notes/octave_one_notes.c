#include "octave_one_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C1 = {.freq_hz = 33, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 33)};
struct Note CSHARP1 = {.freq_hz = 35, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 35)};
struct Note D1 = {.freq_hz = 37, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 37)};
struct Note DSHARP1 = {.freq_hz = 39, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 39)};
struct Note E1 = {.freq_hz = 41, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 41)};
struct Note F1 = {.freq_hz = 44, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 44)};
struct Note FSHARP1 = {.freq_hz = 46, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 46)};
struct Note G1 = {.freq_hz = 49, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 49)};
struct Note GSHARP1 = {.freq_hz = 52, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 52)};
struct Note A1 = {.freq_hz = 55, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 55)};
struct Note ASHARP1 = {.freq_hz = 58, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 58)};
struct Note B1 = {.freq_hz = 62, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 62)};