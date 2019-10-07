#include <stdio.h>


int max1(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main(int argc, char const *argv[]) {
    int a, b, c;

    puts("请输入三个整数");
    printf("整数a：\n"); scanf("%d", &a);
    printf("整数b：\n"); scanf("%d", &b);
    printf("整数c：\n"); scanf("%d", &c);
    printf("最大的数是：%d\n", max1(a, b, c));

    return 0;
}