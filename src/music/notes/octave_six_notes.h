#ifndef OCTAVE_SIX_NOTES_H_
#define OCTAVE_SIX_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 6 is C6
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C6;
extern struct Note CSHARP6;
extern struct Note D6;
extern struct Note DSHARP6;
extern struct Note E6;
extern struct Note F6;
extern struct Note FSHARP6;
extern struct Note G6;
extern struct Note GSHARP6;
extern struct Note A6;
extern struct Note ASHARP6;
extern struct Note B6;

#endif /* OCTAVE_SIX_NOTES_H_ */