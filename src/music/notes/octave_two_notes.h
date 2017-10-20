#ifndef OCTAVE_TWO_NOTES_H_
#define OCTAVE_TWO_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 2 is C2
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C2;
extern struct Note CSHARP2;
extern struct Note D2;
extern struct Note DSHARP2;
extern struct Note E2;
extern struct Note F2;
extern struct Note FSHARP2;
extern struct Note G2;
extern struct Note GSHARP2;
extern struct Note A2;
extern struct Note ASHARP2;
extern struct Note B2;

#endif /* OCTAVE_TWO_NOTES_H_ */