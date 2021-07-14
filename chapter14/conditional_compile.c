#include <stdio.h>

#define DEBUG 1

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 256
#endif


int main() {

    int i = 2;
    int j = 3;

    #if DEBUG
    printf("Value of i : %d\n", i);
    #endif
    printf("Buffer Size: %d\n", BUFFER_SIZE);

}