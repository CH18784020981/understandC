#include <stdio.h>
unsigned rrotate(unsigned x, int n) {
    unsigned int y;
    y = x >> n;
    return y;
}
unsigned lrotate(unsigned x, int n) {
    unsigned int y;
    y = x << n;
    return y;
}
int main(void) {
    unsigned int x;
    int n;
    printf("输入x:");
    scanf("%d", &x);
    printf("输入左移位数n:");
    scanf("%d", &n);
    printf("%u << %d = %u\n", x, n, rrotate(x, n));

    printf("输入x:");
    scanf("%d", &x);
    printf("输入右移位数n:");
    scanf("%d", &n);
    printf("%u >> %d = %u\n", x, n, lrotate(x, n));
    return 0;
}
