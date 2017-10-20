#ifndef OCTAVE_FOUR_NOTES_H_
#define OCTAVE_FOUR_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 4 is C4
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C4;
extern struct Note CSHARP4;
extern struct Note D4;
extern struct Note DSHARP4;
extern struct Note E4;
extern struct Note F4;
extern struct Note FSHARP4;
extern struct Note G4;
extern struct Note GSHARP4;
extern struct Note A4;
extern struct Note ASHARP4;
extern struct Note B4;

#endif /* OCTAVE_FOUR_NOTES_H_ */