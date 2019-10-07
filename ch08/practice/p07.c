#include <stdio.h>
int combination(int n, int r) {
    int a = 1; int b = 1;

    for (int i = 1; i <= n; i++) {
        a *= i;
    }

    for (int i = 1; i <= r; i++) {
        b *= i;
    }

    return a / b;
}

int main(int argc, char const *argv[]) {

    int n, r;
ch:
    printf("输入整数n：\n"); scanf("%d", &n);
    printf("输入整数r：\n"); scanf("%d", &r);

    if (n >= r) {
        printf("%d\n",combination(n, r)); 

    } else {
        printf("输入错误，请重新输入\a\n\n\n");
        goto ch;
    }

    return 0;
}
