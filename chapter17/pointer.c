#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *create_s(size_t n) {
    char *p;
    p = (char *) malloc(n+1); 
    return p;
}

double integrate(double (*f)(double), double a, double b);
void qsort(void *base, size_t nmeb, size_t size,
           int (*compar) (const void *, const void *));

char *concatv2(const char *s1, const char *s2) {
    char *result;
    result = malloc(strlen(s1) + strlen(s2) + 1);
    if (result == NULL) {
        printf("Error: malloc failed in concat\n");
        exit (EXIT_FAILURE);
    }
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

typedef union {
    int i;
    double d;
} Part;

char digit_to_hexchar(int digit) {
    static const char hex_char[16] = "0123456789ABCDEF";
    return hex_char[digit];
}

int main() {
    size_t n = sizeof(Part);
    printf("Part size: %d\n", n);

    int *a;
    a = malloc(4 * sizeof(int));
    return 0;
}



