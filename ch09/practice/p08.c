#include <stdio.h>
#include <string.h>
#define NUMBER 80
void put_stringr(const char s[]) {
    int i, j;
    j = strlen(s) - 1;

    for (i = 0; i < strlen(s); i++) {
        putchar(s[j - i]);
    }


putchar('\n');
}

int main(int argc, char const *argv[]) {
    char s[NUMBER];
    int i;
    printf("输入字符串：\n"); scanf("%s", s);
    

    // printf("倒序为：%s\n", put_stringr(s));
    put_stringr(s);
    return 0;
}