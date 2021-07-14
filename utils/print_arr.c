#include <stdio.h>
#include "print_arr.h"

void print_arr(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    
    printf("]\n");
}


