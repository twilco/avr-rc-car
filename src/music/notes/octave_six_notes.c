#include "octave_six_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C6 = {.freq_hz = 1047, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1047)};
struct Note CSHARP6 = {.freq_hz = 1109, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1109)};
struct Note D6 = {.freq_hz = 1175, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1175)};
struct Note DSHARP6 = {.freq_hz = 1245, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1245)};
struct Note E6 = {.freq_hz = 1319, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1319)};
struct Note F6 = {.freq_hz = 1397, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1397)};
struct Note FSHARP6 = {.freq_hz = 1480, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1480)};
struct Note G6 = {.freq_hz = 1568, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1568)};
struct Note GSHARP6 = {.freq_hz = 1661, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1661)};
struct Note A6 = {.freq_hz = 1760, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1760)};
struct Note ASHARP6 = {.freq_hz = 1865, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1865)};
struct Note B6 = {.freq_hz = 1976, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 1976)};