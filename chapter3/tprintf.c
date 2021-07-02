#include <stdio.h>

int main()
{
    int i;
    float x,y;

    i = 10;
    x = 289.4;
    y = 55.27;

    printf("i = %d, x = %f\n", i, x);

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    return 0;
}
