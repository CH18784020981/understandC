#include<stdio.h>

int main(void)
{
    char s[128];

    printf("请输入要打开的文件名: ");
    scanf("%s", s);
    fopen(s, "w");

    return 0;
}
