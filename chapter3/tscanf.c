#include <stdio.h>

int main()
{
    int i,j;
    float x,y;
    scanf("%d%d%f%f", &i,&j,&x,&y);

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    /* input 1-20.3-4.0e3 */
    scanf("%d%d%f%f", &i,&j,&x,&y);
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
    /* output: i = 1, j = -20, x = 0.300000, y = -4000.000000  */
    return 0;
}
