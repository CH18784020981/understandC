#include <stdio.h>
void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = b[i][0] * a[0][j] + b[i][1] * a[1][j] + b[i][2] * a[2][j] + b[i][3] * a[3][j];
        }
    }

    return;
}
int main(void) {
    
    int i, j, k;
    int a[4][3] , b[3][4], c[4][4] = {0};


    /*输入4行3列矩阵*/
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("输入4行3列矩阵:a[%d][%d]\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    /*输入3行4列矩阵*/

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("输入3行4列矩阵:[%d][%d]\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }


    putchar('\n');
    mat_mul(a, b, c);
    printf("a = \n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d",a[i][j]);
        }

        printf("\n");
    }

    printf("b = \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", b[i][j]);
        }

        printf("\n");
    }

    printf("c = b * a = \n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}
