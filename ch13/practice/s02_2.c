#include <stdio.h>
#include "util.c"
int main(int argc, char const *argv[]) {
    int a, b, c;
    printf("请选择难度等级：1...0~9,2...0~99,3...0~999,4...0~9999,0...退出\n");
ch: scanf("%d", &a);

    if (a < 0 && a > 4) {
        printf("请输入正确的操作！！！\n");
        goto ch;
    }

    if (a == 1) {
        one();
    }

    if (a == 2) {
        two();
    }

    if (a == 3) {
        three();
    }

    if (a == 4) {
        four();
    }

    return 0;
}