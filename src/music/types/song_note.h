#ifndef SONG_NOTE_H_
#define SONG_NOTE_H_

#include "note.h"

struct Song_Note {
    Note note;
    uint16_t duration_ms;
} Song_Note;

#endif /* SONG_NOTE_H_ */