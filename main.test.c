#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "allocation.h"

static unsigned char alloc_count = 0;

int main() {
    const char* txt = "Hello World";
    char* muttxt = memalloc(sizeof(char) * sizeof(txt), &alloc_count);
    strcpy(muttxt, txt);

    printf("%s\n", muttxt);
    printf("%i\n", alloc_count);

    free(muttxt);
    return 0;
}