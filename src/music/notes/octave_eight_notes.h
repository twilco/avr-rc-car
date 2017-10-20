#ifndef OCTAVE_EIGHT_NOTES_H_
#define OCTAVE_EIGHT_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 8 is C8
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C8;
extern struct Note CSHARP8;
extern struct Note D8;
extern struct Note DSHARP8;
extern struct Note E8;
extern struct Note F8;
extern struct Note FSHARP8;
extern struct Note G8;
extern struct Note GSHARP8;
extern struct Note A8;
extern struct Note ASHARP8;
extern struct Note B8;

#endif /* OCTAVE_EIGHT_NOTES_H_ */