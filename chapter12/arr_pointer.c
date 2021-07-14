#include <stdio.h>

#define N 10
#define NUM_ROWS 10
#define NUM_COLS 10

void handle_cols() {
    int a[NUM_ROWS][NUM_COLS], i, (*p)[NUM_COLS];

    for (p = a; p <= &a[NUM_ROWS - 1]; p++)
        (*p)[i] = 0;
}


int main() {
    int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        sum, *p;

    sum = 0;

    for (p = &a[0]; p < &a[10]; p++) {
        sum += *p;
    }

    printf("sum: %d\n", sum);
}

