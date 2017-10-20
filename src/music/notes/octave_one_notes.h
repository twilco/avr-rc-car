#ifndef OCTAVE_ONE_NOTES_H_
#define OCTAVE_ONE_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 1 is C1
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C1;
extern struct Note CSHARP1;
extern struct Note D1;
extern struct Note DSHARP1;
extern struct Note E1;
extern struct Note F1;
extern struct Note FSHARP1;
extern struct Note G1;
extern struct Note GSHARP1;
extern struct Note A1;
extern struct Note ASHARP1;
extern struct Note B1;

#endif /* OCTAVE_ONE_NOTES_H_ */