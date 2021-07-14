#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t strlen_(const char *s) {
    size_t n = 0;

    for (; *s != '\0'; s++)
        n++;
    return n;
}

char *strcpy_(char *s1, const char *s2) {
    char *p;
    p = s1;
    while (*p != '\0')
        p++;
    while (*s2 != '\0')
    {
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}




int main() {
    char str1[10], str2[10];
    // str1 = "abc"; // error
    // str2 = str1; // error
    strcpy(str1, "abcd");
    strcpy(str2, str1);

    printf(strcat(str1, "\n"));
    printf(strcat(str2, "\n"));
}


