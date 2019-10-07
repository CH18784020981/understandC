#include <stdio.h>

int pow4(int x) {
    int num=1;

    for (int i = 0; i < 4; i++) {
        num *= x;
    }

    return num;
}

int main(int argc, char const *argv[]) {

    int a;
    printf("请输入数字：\n"); scanf("%d", &a);
    printf("%d的4次方为%d\n", a, pow4(a));
    return 0;

    
}