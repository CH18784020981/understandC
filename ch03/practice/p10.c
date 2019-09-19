#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c;

    printf("请输入三个整数：");
    scanf("%d%d%d", &a,&b,&c);

    if (a==b&&a==c)
        printf("三个值相等");
    else if (a==b||a==c||b==c)
        printf("有两个值相等");
    else if (a!=b&&b!=c&&c!=a)
        printf("三个值都不相等");
	
	return 0;
}