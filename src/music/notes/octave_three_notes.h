#ifndef OCTAVE_THREE_NOTES_H_
#define OCTAVE_THREE_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 3 is C3
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C3;
extern struct Note CSHARP3;
extern struct Note D3;
extern struct Note DSHARP3;
extern struct Note E3;
extern struct Note F3;
extern struct Note FSHARP3;
extern struct Note G3;
extern struct Note GSHARP3;
extern struct Note A3;
extern struct Note ASHARP3;
extern struct Note B3;

#endif /* OCTAVE_THREE_NOTES_H_ */