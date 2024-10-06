#pragma once
#include <stdlib.h>

#ifdef __cplusplus
#define CPLUSPLUS_MODE
#endif

#ifdef CPLUSPLUS_MODE //   : C++ Mode

//                         : C++ Logic
#include <cstdint>
static uint8_t alloc_count = 0;
#define ALLOC_COUNT_BEGIN void* operator new(size_t s){alloc_count++;return malloc(s);}
#define ALLOC_COUNT_BEGIN_PRINT_SIZE void* operator new(size_t s){printf("Allocated: %ibyte\n", s);alloc_count++;return malloc(s);}

#else //                   : C Mode

//                         : C Logic
void* memalloc(size_t s, unsigned char* count) {
    (*count)++;
    return malloc(s);
}
#endif
