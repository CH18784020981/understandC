#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);
    
    
    // if (num)
    //     puts("该整数不是0");
    // else
    //     puts("该整数是0");
	
	(num==0)?printf("该整数是0\n" ):printf("该整数不是0\n");
    return 0;
}