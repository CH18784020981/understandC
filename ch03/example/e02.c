#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	printf("请输入一个整数：");
	scanf("%d",&num);
	if(num%2){
		printf("输出的整数是奇数");
	}

	return 0;
}
