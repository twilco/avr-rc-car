#ifndef OCTAVE_NINE_NOTES_H_
#define OCTAVE_NINE_NOTES_H_

#include "../notes_util_macros.h"
#include "../types/note.h"
#include "../../avr_config.h"

/* 
   - Pattern is note, octave - Note C octave 9 is C9
   - Please note that I've rounded these notes to the nearest int, so if you need exact frequencies look elsewhere.
*/

extern struct Note C9;
extern struct Note CSHARP9;
extern struct Note D9;
extern struct Note DSHARP9;
extern struct Note E9;
extern struct Note F9;
extern struct Note FSHARP9;
extern struct Note G9;
extern struct Note GSHARP9;
extern struct Note A9;
extern struct Note ASHARP9;
extern struct Note B9;

#endif /* OCTAVE_NINE_NOTES_H_ */