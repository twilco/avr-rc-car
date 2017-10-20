#ifndef OCTAVE_SEVEN_NOTES_H_
#define OCTAVE_SEVEN_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 7 is C7
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C7;
extern struct Note CSHARP7;
extern struct Note D7;
extern struct Note DSHARP7;
extern struct Note E7;
extern struct Note F7;
extern struct Note FSHARP7;
extern struct Note G7;
extern struct Note GSHARP7;
extern struct Note A7;
extern struct Note ASHARP7;
extern struct Note B7;

#endif /* OCTAVE_SEVEN_NOTES_H_ */