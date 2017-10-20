#include "octave_eight_notes.h"

/* Frequency of <note><octave> in hertz rounded to the nearest int - .5 is rounded up */

struct Note C8 = {.freq_hz = 4186, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 4186)};
struct Note CSHARP8 = {.freq_hz = 4435, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 4435)};
struct Note D8 = {.freq_hz = 4699, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 4699)};
struct Note DSHARP8 = {.freq_hz = 4978, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 4978)};
struct Note E8 = {.freq_hz = 5274, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 5274)};
struct Note F8 = {.freq_hz = 5588, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 5588)};
struct Note FSHARP8 = {.freq_hz = 5920, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 5920)};
struct Note G8 = {.freq_hz = 6272, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 6272)};
struct Note GSHARP8 = {.freq_hz = 6645, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 6645)};
struct Note A8 = {.freq_hz = 7040, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 7040)};
struct Note ASHARP8 = {.freq_hz = 7459, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 7459)};
struct Note B8 = {.freq_hz = 7902, .ocr_val = CALC_CTC_FREQ(F_CPU, TIMER1_PRESCALER, 7902)};