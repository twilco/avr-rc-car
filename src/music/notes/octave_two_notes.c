#include "octave_two_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C2 = {.freq_hz = 65, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 65)};
struct Note CSHARP2 = {.freq_hz = 69, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 69)};
struct Note D2 = {.freq_hz = 73, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 73)};
struct Note DSHARP2 = {.freq_hz = 78, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 78)};
struct Note E2 = {.freq_hz = 82, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 82)};
struct Note F2 = {.freq_hz = 87, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 87)};
struct Note FSHARP2 = {.freq_hz = 92, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 92)};
struct Note G2 = {.freq_hz = 98, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 98)};
struct Note GSHARP2 = {.freq_hz = 104, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 104)};
struct Note A2 = {.freq_hz = 110, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 110)};
struct Note ASHARP2 = {.freq_hz = 117, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 117)};
struct Note B2 = {.freq_hz = 123, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 123)};