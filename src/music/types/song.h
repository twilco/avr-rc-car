#ifndef SONG_H_
#define SONG_H_

#include "song_note.h"

struct Song {
    uint16_t num_notes;
    struct Song_Note notes[];
} Song;



#endif /* SONG_H_ */