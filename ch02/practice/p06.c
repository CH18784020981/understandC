#include <stdio.h>
int main(int argc, char const *argv[])
{
    double height,weight;
    printf("请输入你的身高：");
    scanf("%lf",&height);
    weight = (height-100)*0.9;
    printf("你的标准体重为 ：%.1f\n",weight);
    return 0;
}