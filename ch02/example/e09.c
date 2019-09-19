#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;

	puts("请输入两个数：");

	printf("输入数a：");

	scanf("%d",&a);

	printf("输入数b：");
	scanf("%d",&b);

	printf("%d和%d的平均数= %f\n",a,b,(double)((a+b)/2) );

	return 0;
}