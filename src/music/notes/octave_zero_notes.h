#ifndef OCTAVE_ZERO_NOTES_H_
#define OCTAVE_ZERO_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 0 is C0
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C0;
extern struct Note CSHARP0;
extern struct Note D0;
extern struct Note DSHARP0;
extern struct Note E0;
extern struct Note F0;
extern struct Note FSHARP0;
extern struct Note G0;
extern struct Note GSHARP0;
extern struct Note A0;
extern struct Note ASHARP0;
extern struct Note B0;

#endif /* OCTAVE_ZERO_NOTES_H_ */