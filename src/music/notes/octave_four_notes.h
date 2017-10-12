#ifndef OCTAVE_FOUR_NOTES_H_
#define OCTAVE_FOUR_NOTES_H_

#include <stdint.h>

/* 
   - Pattern is note, octave - Note C octave 4 is C4
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern const uint16_t C4;
extern const uint16_t CSHARP4;
extern const uint16_t D4;
extern const uint16_t DSHARP4;
extern const uint16_t E4;
extern const uint16_t F4;
extern const uint16_t FSHARP4;
extern const uint16_t G4;
extern const uint16_t GSHARP4;
extern const uint16_t A4;
extern const uint16_t ASHARP4;
extern const uint16_t B4;

#endif /* OCTAVE_FOUR_NOTES_H_ */