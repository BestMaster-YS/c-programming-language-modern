#include <stdio.h>


float average(float, float);


int main() {
    float x,y,z;
    printf("Enter here numbers: ");
    scanf("%f%f%f", &x,&y,&z);

    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", x, z, average(x, z));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));

    return 0;
}

float average(float a, float b) {
    return (a + b) / 2;
}
