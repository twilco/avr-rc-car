#ifndef PACKET_H_
#define PACKET_H_

#include "../constants/packet_constants.h"

#include <stdint.h>
#include <stdbool.h>

struct Packet {
    char data[PACKET_SIZE];
    uint8_t open_idx;
    bool is_valid;
} Packet;



#endif /* PACKET_H_ */