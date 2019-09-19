#include <stdio.h>
int main(int argc, char const *argv[])
{
	double a;
	puts("请输入一个实数");
	scanf("%l f",&a);
	printf("你输入的是%f\n",a);
	return 0;
}