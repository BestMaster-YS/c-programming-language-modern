#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool is_prime(int n)
{
    int divisor;
    if (n <= 1) return FALSE;
    for (divisor = 2; divisor * divisor <= n; divisor++)
        if (n % divisor == 0)
            return FALSE;
    return TRUE;
}

int main ()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (is_prime(n))
        printf("Prime\n");
    else
        printf("Not a prime\n");
    return 0;
}

