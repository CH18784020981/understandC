#include <stdio.h>


int num1(int a, int b) {
    return (a > b ? a : b);
}
int num2(int a, int b, int c, int d) {
    return num1(num1(a, b), num1(c, d));
}
int main(int argc, char const *argv[]) {
    int n1, n2, n3, n4;
    printf("请输入四个整数：\n");
    printf("请输整数n1：\n"); scanf("%d", &n1);
    printf("请输整数n2：\n"); scanf("%d", &n2);
    printf("请输整数n3：\n"); scanf("%d", &n3);
    printf("请输整数n4：\n"); scanf("%d", &n4);
    printf("最大值是%d\n", num2(n1, n2, n3, n4));

    return 0;
}