# Allocation_CPP

Allocation_CPP is a C/C++ library that helps developers track memory allocations in their programs. It provides detailed insights into allocated memory blocks, allowing easy monitoring and debugging of memory usage.

## Installation

### Using Git

To install the library using Git, run the following command to clone the repository:

```sh
git clone https://github.com/IzanamiiDevv/Allocation_CPP.git
```

Navigate to the cloned directory:

```sh
cd Allocation_CPP
```

Follow the instructions in the README to compile and link the library to your project.

### Manual Installation

1. Download the latest version of the library from the [GitHub repository](https://github.com/IzanamiiDevv/Allocation_CPP/).
2. Extract the downloaded files.
3. Copy the source files (`.h`) into your project's directory.
4. Include the header files in your code, and compile the project.

## Usage

To use Allocation_CPP in your program, simply include the header file and link the library when compiling. Refer to the provided examples for detailed usage instructions.

### Example Usage C:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "allocation.h"

//: Create a unsigned 8bit interger variable to holds allocation count.
static unsigned char alloc_count = 0;


int main() {

    //: Creating a mutable string.
    const char* txt = "Hello World";
    char* muttxt = memalloc(sizeof(char) * sizeof(txt), &alloc_count); //: use of memalloc.
    strcpy(muttxt, txt);

    //: Print some values.
    printf("%s\n", muttxt);
    printf("%i\n", alloc_count);

    free(muttxt); //: Delete the allocated memorry.
    return 0;
}
```
```sh
gcc -o C_Program main.test.c
```
### Example Usage C++:
```cpp
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
```
```sh
g++ -o CPP_Program main.test.cpp
```