#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;

	printf("输入两个数");

	scanf("%d%d",&a,&b);
	if(a>b){
		printf("输出较大的数是：%d\n",a);
		printf("输出较小的数是：%d\n",b);
	}
	else{
		printf("输出较大的数是：%d\n",b);
		printf("输出较小的数是：%d\n",a);
	}
	return 0;
}