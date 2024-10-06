#include <iostream>
#include "allocation.h"

//: Create a unsigned 8bit interger variable to holds allocation count.
static uint8_t alloc = 0;

//: Declared a Macro like Function to Start the Process of Counting the Allocated Memorry.
ALLOC_COUNT_BEGIN(alloc);

int main() {
    std::cout << alloc << std::endl;
}