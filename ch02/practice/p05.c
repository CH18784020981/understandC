#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	puts("请输入两个整数。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);
    double c = (1.0*a/b)*100;
    printf("a是b的%f%%。\n",c);
	return 0;
}