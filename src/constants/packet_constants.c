#include "packet_constants.h"

/* The start char we're expecting to indicate the start of the data portion of our packets. */
const char START_CHAR = 0b10101010;

/* The n-th byte in which we expect to see the checksum byte. */
const uint8_t CHECKSUM_BYTE_POS = 5;