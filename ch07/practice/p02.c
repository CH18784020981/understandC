#include <stdio.h>
#include <math.h>
int main(void) {
    unsigned int n;
    int offset;
    printf("输入n:");
    scanf("%d", &n);
    printf("输入左移位数offset:");
    scanf("%d", &offset);
    printf("%u << %d = %u\n", n, offset, n << offset);
    printf("%u * pow(2,%d) = %d\n", n, offset, (int)(n * pow(2.0, offset)));

    printf("输入n:");
    scanf("%d", &n);
    printf("输入右移位数offset:");
    scanf("%d", &offset);
    printf("%u >> %d = %u\n", n, offset, n >> offset);
    printf("%u / pow(2,%d) = %d\n", n, offset, (int)(n / pow(2.0, offset)));
    return 0;
}
