#include <stdio.h>
int main(int argc, char const *argv[])
{
	int inputFirst,inputSecond,inputThird;
	puts("请输入三个整数。\n");
	printf("整数1：" );scanf("%d",&inputFirst);
	printf("整数2：" );scanf("%d",&inputSecond);
	printf("整数3：" );scanf("%d",&inputThird);
	int num	= inputFirst+inputSecond+inputThird;	
	 printf("它们的和%d\n", num);
	return 0;



}