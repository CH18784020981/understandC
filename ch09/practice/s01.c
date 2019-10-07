#include <stdio.h>
double add(double a, double b) {
    printf("您正在使用加法计算器\n");
    printf("想加的结果结果是：%lf\n", a + b);
    return 0;
}
double dev(double a, double b) {
    printf("您正在使用除法计算器\n");
    printf("想除的结果结果是：%lf\n", a / b);
    return 0;
}
double mul(double a, double b) {
    printf("您正在使用乘法计算器\n");
    printf("想乘的结果结果是：%lf\n", a * b);
    return 0;
}
double sub(double a, double b) {
    printf("您正在使用减法计算器\n");
    printf("想减的结果结果是：%lf\n", a - b);
    return 0;
}

int main(int argc, char const *argv[]) {
    double a, b;
    char c;
ch:
    printf("请输入你想用的计算器+，-，*，/\n");
    scanf("%c", &c);

    if (c != '+' && c != '-' && c != '*' && c != '/') {
        printf("请输入正确操作\n");
        goto ch;
    }

    if (c == '+') {
        printf("请输入第一个数：\n"); scanf("%lf", &a);
        printf("请输入第二个数：\n"); scanf("%lf", &b);
        add(a, b);
    }

    if (c == '/') {
        printf("请输入第一个数：\n"); scanf("%lf", &a);
        printf("请输入第二个数：\n"); scanf("%lf", &b);
        dev(a, b);
    }

    if (c == '*') {
        printf("请输入第一个数：\n"); scanf("%lf", &a);
        printf("请输入第二个数：\n"); scanf("%lf", &b);
        mul(a, b);
    }

    if (c == '-') {
        printf("请输入第一个数：\n"); scanf("%lf", &a);
        printf("请输入第二个数：\n"); scanf("%lf", &b);
        sub(a, b);
    }

    return 0;
}