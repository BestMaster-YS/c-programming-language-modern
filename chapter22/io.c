#include <stdio.h>

void test_freopen(void);
void test_temp(void);

int main() {
    // test_freopen();

    int s[5] = { 1, 2, 4, 5, 5};
    char s1[7] = "123456";

    printf("sizeof s: %d, total size: %d\n", sizeof(s1[0]), sizeof(s1) / sizeof(s1[0]));

    return 0;
}

void test_freopen() {
    if (freopen("test.txt", "w", stdout) != NULL) {
        printf("重定向成功");
    } else {
        printf("重定向失败");
    }
}

void test_temp() {
    const char *temp_filename = tmpnam(NULL);
    FILE *ptr = fopen(temp_filename, "w");
}
