#include<stdio.h>

int put_stringn(const char s[], int n) {
    int cnt = 0;

    while (cnt < n) {
        int i = 0;

        while (s[i]) {
            putchar(s[i++]);
        }

        cnt++;
    }

    putchar('\n');

    return 0;
}


int main(void) {
    char s[128];
    int i;
    printf("请输入字符串: ");
    scanf("%s", s);
    printf("请输入字符串显示的次数: ");
    scanf("%d", &i);
    put_stringn(s, i);
    return 0;
}
