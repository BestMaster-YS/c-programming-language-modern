#include <stdio.h>

int main() {

    int i = 1;
    int j = i++ + i++;

    printf("i = %d, j = %d", i, j);

    return 0;
}
