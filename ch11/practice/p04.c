#include <stdio.h>
#define NUM 10
void put_string(const char *s) {
    while (*s) {
        printf("%c", *s);
        s++;
    }

    return;
}

int main(int argc, char const *argv[]) {
    char i[] = "abcde";
    //printf("输入字符串%s\n", i);
    put_string(i);
    //  printf("%s\n", i);
    return 0;
}