#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	puts("请输入两个整数。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);
    double c = (a/b)*100;
    printf("a是b的%d%%。\n",c);
	return 0;
}