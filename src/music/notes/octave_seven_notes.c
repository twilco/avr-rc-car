#include "octave_seven_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C7 = {.freq_hz = 2093, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2093)};
struct Note CSHARP7 = {.freq_hz = 2217, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2217)};
struct Note D7 = {.freq_hz = 2349, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2349)};
struct Note DSHARP7 = {.freq_hz = 2489, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2489)};
struct Note E7 = {.freq_hz = 2637, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2637)};
struct Note F7 = {.freq_hz = 2794, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2794)};
struct Note FSHARP7 = {.freq_hz = 2960, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 2960)};
struct Note G7 = {.freq_hz = 3136, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3136)};
struct Note GSHARP7 = {.freq_hz = 3322, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3322)};
struct Note A7 = {.freq_hz = 3520, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3520)};
struct Note ASHARP7 = {.freq_hz = 3729, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3729)};
struct Note B7 = {.freq_hz = 3951, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 3951)};