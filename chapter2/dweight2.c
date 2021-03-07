#include<stdio.h>

int main() {
    int height, width, length, weight, volume;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter width of box: ");
    scanf("%d", &width);
    printf("Enter length of box: ");
    scanf("%d", &length);
    volume = height * width * length;
    weight = (volume + 165) / 166;

    printf("Volume: (cubic inches) :%d\n", volume);
    printf("Dimension weight (pounds): %d\n", weight);
    
    return 0;
}





