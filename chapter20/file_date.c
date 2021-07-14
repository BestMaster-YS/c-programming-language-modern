#include <stdio.h>

struct file_date {
    unsigned int day: 5;
    unsigned int month: 4;
    unsigned int year: 7;
};


int main() {
    size_t t = sizeof(struct file_date);
    printf("file_date struct size: %d\n", t);
    printf("int size: %d\n", sizeof(int));

    struct file_date fd;
    fd.day = 28;
    fd.month = 12;
    fd.year = 8;

    
}

