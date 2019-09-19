#include <stdio.h>

int main(int argc, char const *argv[])
 {
 	int a, b,c;

    puts("请输入三个整数：");
    printf("整数1："); scanf("%d", &a);
    printf("整数2："); scanf("%d", &b);
 	printf("整数3："); scanf("%d", &c);
 	if (a<=b&&a<=c)
 	{
 		printf("最小值是%d\n",a);
 	}
	else if (b<=c&&b<=a)
 	{
 		printf("最小值是%d\n",b);
 	}
	else if(c<=a&&c<=b)
 	{
 		printf("最小值是%d\n",c);
 	}

    return 0;
}