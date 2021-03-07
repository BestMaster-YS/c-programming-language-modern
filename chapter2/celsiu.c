#include <stdio.h>

#define FREEZING 32.0
#define SCALE_FACTOR (5.0 / 9.0)

int main() {
    float fahrenheit, celsius;
    printf("Enter fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING) * SCALE_FACTOR;
    printf("Celsius equivalent: %.lf\n", celsius);
    
    return 0;
}