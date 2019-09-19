#include<stdio.h>
int main(void) {
    int n;
    printf("金字塔层数:");
    scanf("%d", &n);
    int i, j;

    for (i = 1; i <= n; i++) { // 控制金字塔的层数，本例输出3层，可以改变输出任意层
        for (j = 1; j <= n - i; j++) { // 控制金字塔每层前面输出的空格数
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) { // 控制金字塔每层需要打印'*'的个数
            printf("*");
        }

        printf("\n");  // 一层金字塔输出完毕，换行继续输出下一层
    }
}