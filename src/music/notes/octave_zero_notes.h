#ifndef OCTAVE_ZERO_NOTES_H_
#define OCTAVE_ZERO_NOTES_H_

#include <stdint.h>

/* 
   - Pattern is note, octave - Note C octave 0 is C0
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern const uint8_t C0;
extern const uint8_t CSHARP0;
extern const uint8_t D0;
extern const uint8_t DSHARP0;
extern const uint8_t E0;
extern const uint8_t F0;
extern const uint8_t FSHARP0;
extern const uint8_t G0;
extern const uint8_t GSHARP0;
extern const uint8_t A0;
extern const uint8_t ASHARP0;
extern const uint8_t B0;

#endif /* OCTAVE_ZERO_NOTES_H_ */