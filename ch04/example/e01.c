#include <stdio.h>
int main(int argc, char const *argv[])
{
	int isRepeat;
	do{
	int input;

	printf("请输入一个整数\n");
	scanf("%d",&input);

	if(input % 2==0){
		printf("输出的是偶数\n");

		}
		else{
		printf("输出的是奇数\n");
		}
		
		printf("好了没\n");
		scanf("%d",&isRepeat);
	}while(isRepeat!=0);

	printf("终于好了\n");
	return 0;
}