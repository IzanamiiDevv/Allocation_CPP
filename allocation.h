#pragma once
#include <stdlib.h>

#define ALLOC_COUNT_BEGIN(_placeholder) void* operator new(size_t s) {_placeholder += 1;return malloc(s);}