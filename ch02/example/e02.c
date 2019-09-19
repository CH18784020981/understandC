#include <stdio.h>
int main(int argc, char const *argv[])
{
	int input;
	printf("请输入一个整数");
	scanf("%d",&input);
	printf("最后一位是:%d\n",input%10);


	return 0;


}