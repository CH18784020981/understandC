#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	
	do{
	int input;
	printf("请输入数字\n");
	scanf("%d",&input);
	if(input>0){
		printf("你输入的是正数\n");
	}
	else if(input<0){
	printf("你输入的是负数\n");
	}
	
	}while(a!=0);
	



	return 0;
}