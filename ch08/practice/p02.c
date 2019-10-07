#include <stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))

int main(int argc, char const *argv[]) {
    int x, y;
    printf("请输入数x：\n"); scanf("%d", &x);
    printf("请输入数y：\n"); scanf("%d", &y);
    printf("%d和%d较大的是：%d\n", x, y, max(x, y));
    return 0;
}
