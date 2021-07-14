#include <stdio.h>

int read_line(char str[], int n) {
    char ch;
    int i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int main() {
    char str[] = "Are we having fun yet?";

    printf("Value of str: %s\n", str);

    printf("%-8.6s\n", str);
}
