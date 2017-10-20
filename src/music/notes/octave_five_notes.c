#include "octave_five_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C5 = {.freq_hz = 523, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 523)};
struct Note CSHARP5 = {.freq_hz = 554, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 554)};
struct Note D5 = {.freq_hz = 587, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 587)};
struct Note DSHARP5 = {.freq_hz = 622, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 622)};
struct Note E5 = {.freq_hz = 659, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 659)};
struct Note F5 = {.freq_hz = 698, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 698)};
struct Note FSHARP5 = {.freq_hz = 740, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 740)};
struct Note G5 = {.freq_hz = 784, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 784)};
struct Note GSHARP5 = {.freq_hz = 831, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 831)};
struct Note A5 = {.freq_hz = 880, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 880)};
struct Note ASHARP5 = {.freq_hz = 932, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 932)};
struct Note B5 = {.freq_hz = 988, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 988)};