#include<stdio.h>

int main(void) {
    char s[128];
    FILE *fp;

    printf("请输入要打开的文件名: ");
    scanf("%s", s);
    fp = fopen(s, "r");

    if (fp == NULL) {
        printf("该文件不存在。\n");
    } else {
        printf("该文件存在。\n");
    }

    return 0;
}
