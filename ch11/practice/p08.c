#include <stdio.h>
//#include <string.h>
#define NUMBER 80
void del_digit(char *s) {
    int i, j = 0;

    while (*s) {
        if ((*s <= '0') || (*s >= '9')) {
            putchar(*s);
        }

        s++;


    }

    putchar('\n');

}

int main(int argc, char const *argv[]) {
    char s[NUMBER];
    int i;

    printf("输入字符串：\n"); scanf("%s", s);

    del_digit(s);

    return 0;

}