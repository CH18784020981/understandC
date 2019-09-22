#include<stdio.h>
int main() {
    int a[4][3];
    int b[3][4];
    int i, j, k, x, y, c[4][4];
    printf("输入4*3 个数 以空格隔开：\n");

    for (i = 0; i < 4; i++)
        for (k = 0; k < 3; k++) {
            scanf("%d", &a[i][k]);
        }

    printf("输入3*4 个数 以空格隔开：\n");

    for (i = 0; i < 3; i++)
        for (k = 0; k < 4; k++) {
            scanf("%d", &b[i][k]);
        }

    for (i = 0; i < 4; i++) { //计算矩阵c的值
        for (j = 0; j < 4; j++) {
            c[i][j] = 0;

            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }

        }
    }

    for (x = 0; x < 4; x++) {
        for (y = 0; y < 4; y++) {
            printf("%d\t", c[x][y]);
        }

        printf("\n");
    }

    return 0;
}