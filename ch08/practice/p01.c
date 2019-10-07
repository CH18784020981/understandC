#include <stdio.h>

#define  diff(x,y) ((x)>(y)?(x)-(y):(y)-(x))

int main(int argc, char const *argv[]) {
    int x, y;
    printf("请输入数x：\n"); scanf("%d", &x);
    printf("请输入数y：\n"); scanf("%d", &y);
    printf("%d和%d的差是：%d\n", x, y, diff(x,y));
    return 0;
}