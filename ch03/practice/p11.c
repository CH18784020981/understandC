#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;

    printf("请输入2个整数：");
    scanf("%d%d", &a,&b);

    if ((a-b)<10||(a-b)==10)
        printf("它们的差小于等于10");
    
    else 
        printf("它们的差大于10");
	
	return 0;
}