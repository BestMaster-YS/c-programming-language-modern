//
// Created by bestmasterliubin on 2021/7/1.
//

#include <stdio.h>

int main() {
    int m[4][4] = {
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };

    int m2[3][4] = {0};
    int i,j;

    printf("[\n");
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%d,", m[i][j]);
        }
        printf("\n");
    }
    printf("]\n");

    printf("[\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%d,", m2[i][j]);
        }
        printf("\n");
    }
    printf("]\n");

    return 0;
}


