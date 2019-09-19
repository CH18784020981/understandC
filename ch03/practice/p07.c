#include <stdio.h>

int main(int argc, char const *argv[])
 {
 	int a, b,c,d;

    puts("请输入四个整数：");
    printf("整数1："); scanf("%d", &a);
    printf("整数2："); scanf("%d", &b);
 	printf("整数3："); scanf("%d", &c);
 	printf("整数4："); scanf("%d", &d);
 	if (a>=b&&a>=c&&a>=d)
 	{
 		printf("最大值是%d\n",a);
 	}
	else if (b>=c&&b>=a&&b>=d)
 	{
 		printf("最大值是%d\n",b);
 	}
	else if(c>=a&&c>=b&&c>=d)
 	{
 		printf("最大值是%d\n",c);
 	}
 	else if(d>=a&&d>=b&&d>=c)
 	{
 		printf("最大值是%d\n",d);
 	}
    return 0;
}