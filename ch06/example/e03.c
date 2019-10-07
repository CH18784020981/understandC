#include <stdio.h>

int num(int a) {

    return a * a;

}
int num2(int b, int c) {
    return (b > c ? b - c : c - b);

}
int main(int argc, char const *argv[]) {
    int x, y;

    puts("请输入两个数：");
    printf("整数x：\n"); scanf("%d", &x);
    printf("整数y：\n"); scanf("%d", &y);

    printf("x和y的平方差是：%d\n", num2(num(x), num(y)));
    return 0;
}
