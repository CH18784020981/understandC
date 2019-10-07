#include <stdio.h>

int cobe(int x) {

    return x * x * x;
}



int main(int argc, char const *argv[]) {
    int a;
    printf("请输入数字：\n"); scanf("%d", &a);
    printf("%d的立方为%d\n", a, cobe(a));
    return 0;
}