#include <stdio.h>
int main(int argc, char const *argv[])
{
	int inputFirst,inputSecond,output;
    
	scanf("%d",&inputFirst);
	
	printf("输入的值为：%d\n",inputFirst);

	scanf("%d",&inputSecond);

	printf("输入的值为：%d\n",inputSecond);
	output=inputFirst+inputSecond;
	printf("它们的和=%d\n",output);
	//printf("它们的和=%d\n",inputFirst+inputSceond);
	return 0;
}