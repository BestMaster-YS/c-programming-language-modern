#include <stdio.h>

#define MAX(n1,n2) ((n1) > (n2) ? (n1) : (n2))
#define PRINT_INT(x) printf(#x " = %d\n", x)
#define MK_ID(n) i##n

int main() {
    int n = MAX(2,3);
    PRINT_INT(n);

    int MK_ID(1) = 2, MK_ID(2) = 3;
    
    PRINT_INT(i1);
}

