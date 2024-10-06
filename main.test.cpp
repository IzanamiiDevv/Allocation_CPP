#include <iostream>
#include <cstdint>
#include "allocation.h"

//: Create a unsigned 8bit interger variable to holds allocation count.
static uint8_t alloc = 0;

//: Declared a Macro like Function to Start the Process of Counting the Allocated Memorry.
ALLOC_COUNT_BEGIN

class MyClass {
private:
    int8_t v_test;
public:
    MyClass(int8_t num) : v_test(num) {}
    int8_t getValue() const {
        return v_test;
    }
};

int main() {
    MyClass* myObj = new MyClass(10);
    std::cout << static_cast<int>(myObj->getValue()) << std::endl;
    std::cout << static_cast<int>(alloc_count) << std::endl;
    delete myObj;
    return 0;
}