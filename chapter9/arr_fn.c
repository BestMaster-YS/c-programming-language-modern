#include <stdio.h>
#include "../utils/print_arr.h"


void swap(int [], int, int);

int main() {
    int arr[5] = { 1, 2, 3, 4, 5};

    printf("%d\n", arr[0]);

    swap(arr, 0, 1);
    print_arr(arr, 5);

    return 0;
}


void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}




