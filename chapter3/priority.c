#include <stdio.h>

int main()
{
    int x = 1;
    int y = -++x;
    printf("y = %d\n", y); /* -2 */

    return 0;
}
