#include <stdio.h>
#include <stddef.h>

typedef unsigned char BYTE; // 8
typedef unsigned short int WORD; // 16

struct file_date {
    unsigned int day: 5;
    unsigned int month: 4;
    unsigned int year: 7;
};


union int_date {
    unsigned int i;
    struct file_date fd;
};

union Regs {
    struct {
        WORD ax, bx, cx, dx;
    } word;
    struct {
        BYTE al, ah, bl, bh, cl, ch, dl, dh;
    } byte;
};

int main() {
    union Regs regs;

    printf("unsigned int size: %d\n", sizeof(unsigned int));
    printf("unsigned char size: %d\n", sizeof(unsigned char));
    printf("unsigned short char size: %d\n", sizeof(short int));

    // printf("size of date_file: %d", offsetof(struct file_date, file_date.year));

    regs.byte.ah = 0x12;
    regs.byte.al = 0x34;

    printf("AX: %x\n", regs.word.ax);
}


