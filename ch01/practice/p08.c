#include <stdio.h>
int main(int argc, char const *argv[])
{
	int inputFirst,inputSecond;
	puts("请输入两个整数");
	printf("整数1:");scanf("%d",&inputFirst);
	printf("整数2:");scanf("%d",&inputSecond);
	printf("它们的乘积是%d\n",inputFirst*inputSecond );

	return 0;
}