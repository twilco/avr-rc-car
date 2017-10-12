#ifndef OCTAVE_EIGHT_NOTES_H_
#define OCTAVE_EIGHT_NOTES_H_

#include <stdint.h>

/* 
   - Pattern is note, octave - Note C octave 8 is C8
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern const uint16_t C8;
extern const uint16_t CSHARP8;
extern const uint16_t D8;
extern const uint16_t DSHARP8;
extern const uint16_t E8;
extern const uint16_t F8;
extern const uint16_t FSHARP8;
extern const uint16_t G8;
extern const uint16_t GSHARP8;
extern const uint16_t A8;
extern const uint16_t ASHARP8;
extern const uint16_t B8;

#endif /* OCTAVE_EIGHT_NOTES_H_ */