#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	puts("请输入一个整数：");scanf("%d",&a);
	if (a>0)
	{
		printf("它的值为%d\n",a );
	}
	else{
		printf("它的值为%d\n",-a );
	}
	return 0;
}