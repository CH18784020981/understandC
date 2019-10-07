#include <stdio.h>

/*返回阶乘的值*/
int factorial(int n) {
    int a = 1;

    for (int i = 1; i <= n; i++) {
        a *= i;

    }

    return a;
}

int main(void) {
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("%d的阶乘为%d\n", num, factorial(num));

    return 0;
}