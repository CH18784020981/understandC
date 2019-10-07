#include<stdio.h>
#include<string.h>

int del_digit(char s[]) {
    int i;
    char temp[128];

    for (i = 0; i <= (strlen(s) - 1); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            temp[i] = s[i];
        } else {
            continue;
        }

        putchar(temp[i]);
    }

    return 0;
}


int main(void) {
    char ch[128];
    printf("请输入字符串: ");
    scanf("%s", ch);
    printf("更新好的字符串");
    del_digit(ch);
    return 0;
}
