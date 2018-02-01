#ifndef PACKET_CONSTANTS_H_
#define PACKET_CONSTANTS_H_

#include <stdint.h>

/* The number of bytes we're expecting to receive in the data portion of our packet. */
#define NUM_DATA_BYTES (uint8_t) 4

/* The number of bytes reserved for the checksum portion of our packet. */
#define NUM_CHECKSUM_BYTES (uint8_t) 1

/* The sum of our data and checksum sizes. */
#define DATA_AND_CHECKSUM_SIZE (uint8_t) (NUM_DATA_BYTES + NUM_CHECKSUM_BYTES)

/* Size of the packets-to-process queue. */
#define PACKET_QUEUE_SIZE (uint8_t) 5

/* The start char we're expecting to indicate the start of the data portion of our packets. */
extern const char START_CHAR;

/* The n-th byte in which we expect to see the checksum byte. */
extern const uint8_t CHECKSUM_BYTE_POS;

#endif /* PACKET_CONSTANTS_H_ */