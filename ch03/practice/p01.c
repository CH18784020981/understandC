#include <stdio.h>
int main(int argc, char const *argv[])
{
    int A,B;

    printf("请输入两个整数：");
    scanf("%d%d", &A,&B);

    if (A % B)
        puts("B不是A的约数");
    else
        puts("B是A的约数");

    return 0;
}