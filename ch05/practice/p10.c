#include <stdio.h>

int main(void) {
    int i, j, k;
    int tensu1[4][3] ,tensu2[3][4],tensu3[4][4]={0};


    /*输入4行3列矩阵*/
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("输入4行3列矩阵:a[%d][%d]\n", i, j);
            scanf("%d", &tensu1[i][j]);
        }
    }

    /*输入3行4列矩阵*/

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("输入3行4列矩阵:[%d][%d]\n", i, j);
            scanf("%d", &tensu2[i][j]);
        }
    }

    /*输出4行3列矩阵*/
    puts("4行3列矩阵");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu1[i][j]);
        }

        printf("\n");
    }

    putchar('\n');
    /*输出3行4列矩阵*/
    puts("3行4列矩阵");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", tensu2[i][j]);
        }

        printf("\n");
    }

    putchar('\n');


    /*显示乘积*/
    puts("乘积");

    for (i = 0; i < 4; i++) 
        for (j = 0; j < 4; j++) 
            for (k = 0; k < 3; k++) 
                {tensu3[i][j] += tensu1[i][k] * tensu2[k][j];}
            
        

        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                printf("%d\t", tensu3[i][j]);
            }

            printf("\n");
        }

        putchar('\n');
    

    return 0;
}