#include <iostream>
#include <cstdint>
#include "allocation.h"

//: Declared a Macro like Function to Start the Process of Counting the Allocated Memorry.
ALLOC_COUNT_BEGIN

//: Creates a Example Class.
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
    MyClass* myObj = new MyClass(10); //: Allocate instance of the Class to the Heap.

    //: Prints a Value
    std::cout << static_cast<int>(myObj->getValue()) << std::endl;
    std::cout << static_cast<int>(alloc_count) << std::endl; //: outputs: 1

    delete myObj; //: Deletes the allocated memorry.
    return 0;
}