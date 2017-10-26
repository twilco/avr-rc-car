#ifndef ONE_THOUSAND_MILES_H_
#define ONE_THOUSAND_MILES_H_

#include "../notes/general_notes.h"
#include "../notes/octave_two_notes.h"
#include "../types/song.h"

/* 
    Unfortunately our Song_Note structs need to be #define'd like this in order for C to recognize it as a compile-time 
    constant in a Song struct (or whatever else consumes it).  Specifically, it avoids an "initializer element is not constant" compiler error.
*/
#define QUIET_500ms { .note = NO_NOISE_INIT, .duration_ms = (uint16_t) 500 }
#define F2_500ms { .note = F2_INIT, .duration_ms = (uint16_t) 500 }

extern const struct Song one_thousand_miles_song;

#endif /* ONE_THOUSAND_MILES_H_ */