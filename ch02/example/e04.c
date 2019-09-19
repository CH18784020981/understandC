#include <stdio.h>
int main(int argc, char const *argv[])
{
	int input;
	puts("请输入一个数字");
	scanf("%d",&input);
	printf("符号取反之后的值是%d\n", -input);
	return 0;
}