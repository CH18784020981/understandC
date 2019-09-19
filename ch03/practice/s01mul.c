#include <stdio.h>
int main(int argc, char const *argv[])
{
	double a,b;
	printf("您正在使用乘法计算器\n");

	printf("请输入第一个数：\n");scanf("%lf",&a);

	printf("请输入第二个数：\n");scanf("%lf",&b);
	printf("结果是：%f\n",a*b);

	return 0;
}	