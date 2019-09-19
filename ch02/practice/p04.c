#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a=1,b;
	double c=1.2,d;
	puts("请输入两个数");
	printf("数b：");scanf("%d",&b);
	printf("数d：");scanf("%lf",&d);
	printf("整型常量和浮点型常量的积:%f商%f\n",a*c,a/c);
	printf("整型常量和浮点型变量的积:%f商%f\n",a*d,a/d);
	printf("整型常量和整型常量的积:%d商%f\n",a*b,1.0*a/b);
	printf("浮点型常量和浮点型常量的积:%f商%f\n",d*c,c/d);
	return 0;
}
