#include<stdio.h>
#include<string.h>
#define NUMBER 128
int rev_string(char s[]) {
    int i;
    int j;
    j = strlen(s) - 1;
    char temp[NUMBER];

    for (i = 0; i <= j; i++) {
        temp[i] = s[j - i];
    }

    for (i = 0; i <= j; i++) {
        s[i] = temp[i];
    }

    return 0;
}

int main(void) {
    char ch[NUMBER];
    int i;
    printf("请输入字符串: ");
    scanf("%s", ch);
    rev_string(ch);
    printf("更新后的字符串: %s", ch);
    return 0;
}
