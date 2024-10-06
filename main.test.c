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