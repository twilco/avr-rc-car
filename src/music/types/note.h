#ifndef NOTE_H_
#define NOTE_H_

#include <stdint.h>

struct Note {
    uint16_t freq_hz;
    uint16_t ocr_val;
} Note;

#endif /* NOTE_H_ */