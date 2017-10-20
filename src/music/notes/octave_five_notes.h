#ifndef OCTAVE_FIVE_NOTES_H_
#define OCTAVE_FIVE_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 5 is C5
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C5;
extern struct Note CSHARP5;
extern struct Note D5;
extern struct Note DSHARP5;
extern struct Note E5;
extern struct Note F5;
extern struct Note FSHARP5;
extern struct Note G5;
extern struct Note GSHARP5;
extern struct Note A5;
extern struct Note ASHARP5;
extern struct Note B5;

#endif /* OCTAVE_FIVE_NOTES_H_ */