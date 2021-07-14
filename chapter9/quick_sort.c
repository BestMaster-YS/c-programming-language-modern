#include <stdio.h>
#include "../utils/print_arr.h"

#define N 10


int partition(int [], int, int);
void quicksort(int [], int, int);

int main() {
    int a[N], i;
    printf("Enter %d numbers to be sorted: \n", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    print_arr(a, N);
    
    quicksort(a, 0, N - 1);
    printf("In sorted order: \n");
    print_arr(a, N);

    return 0;
}


void quicksort(int a[], int low, int high) {
    int middle;
    if (low >= high) return;
    middle = partition(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int partition(int arr[], int low, int high) {
    int temp = arr[low];

    while (low < high) {
        while (low < high && arr[high] >= temp) {
            high--;
        }
        if (low >= high) break;
        arr[low] = arr[high];
        low++;

        while (low < high && arr[low] <= temp) {
            low++;
        }
        if (low >= high) break;
        arr[high] = arr[low];
        high--;
    }

    arr[high] = temp;

    return high;
}


