#include <stdio.h>
int main(int argc, char const *argv[])
{
	int height,width;
	puts("请输入长方形的宽：");scanf("%d",&width);
	puts("请输入长方形的高：");scanf("%d",&height);
	printf("长方形的面积为：%d\n",height*width );
	return 0;
}