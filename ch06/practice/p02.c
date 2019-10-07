#include <stdio.h>

int min3(int a, int b, int c) {
    int min = a;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    return min;

}
int main(int argc, char const *argv[]) {
    int n1, n2, n3;
    puts("请输入三个整数:");
    printf("整数n1\n"); scanf("%d", &n1);
    printf("整数n2\n"); scanf("%d", &n2);
    printf("整数n3\n"); scanf("%d", &n3);
    printf("较小的值为：%d\n", min3(n1, n2, n3));

    return 0;
}


