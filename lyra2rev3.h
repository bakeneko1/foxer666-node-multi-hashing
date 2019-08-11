#ifndef LYRA2REV3_H
#define LYRA2REV3_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void lyra2rev3_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif