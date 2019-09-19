#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b;
	printf("请输入两个整数\n");
	printf("整数1:");scanf("%d",&a);
	printf("整数2:");scanf("%d",&b);
	printf("它们的和为%d积为%d\n",a+b,a*b);
	return 0;
}
