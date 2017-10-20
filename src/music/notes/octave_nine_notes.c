#include "octave_nine_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C9 = {.freq_hz = 8372, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 8372)};
struct Note CSHARP9 = {.freq_hz = 8870, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 8870)};
struct Note D9 = {.freq_hz = 9397, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 9397)};
struct Note DSHARP9 = {.freq_hz = 9956, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 9956)};
struct Note E9 = {.freq_hz = 10548, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 10548)};
struct Note F9 = {.freq_hz = 11175, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 11175)};
struct Note FSHARP9 = {.freq_hz = 11840, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 11840)};
struct Note G9 = {.freq_hz = 12544, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 12544)};
struct Note GSHARP9 = {.freq_hz = 13290, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 13290)};
struct Note A9 = {.freq_hz = 14080, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 14080)};
struct Note ASHARP9 = {.freq_hz = 14917, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 14917)};
struct Note B9 = {.freq_hz = 15804, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 15804)};