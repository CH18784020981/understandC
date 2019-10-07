#include <stdio.h>

#define NUMBER 128
void null_string(char s[]) {
    s[0] = '\0';
}

int main(int argc, char const *argv[]) {
    char a[NUMBER];
    //int i;
    printf("请输入字符串\n");

    scanf("%s", a);
    null_string(a);
    printf("输入的字符串是\"%s\"\n", a);

    return 0;
}