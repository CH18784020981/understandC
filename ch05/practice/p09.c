#include <stdio.h>

#define NUMBER 80    /*人数上限*/

int main(void) {
    int i, j;
    int num;              /*实际的人数*/
    int tensu[NUMBER];    /*学生的分数*/
    int bunpu[11] = {0}; /*分布图*/
    int max;/*分布图中最大值*/

    printf("请输入学生人数：");

    do {
        scanf("%d", &num);

        if (num < 1 || num > NUMBER) {
            printf("请输入1-%d的数：", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++) {
        printf("%2d号:", i + 1);

        do {
            scanf("%d", &tensu[i]);

            if (tensu[i] < 0 || tensu[i] > 100) {
                printf("请输入1-100的数：");
            }
        } while (tensu[i] < 0 || tensu[i] > 100);

        bunpu[tensu[i] / 10]++;
    }

    max = bunpu[0];

    for (i = 1; i <= 10; i++) {
        if (bunpu[i] > max) {
            max = bunpu[i];
        }
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j <= 10; j++) {
            printf("   ");

            if (bunpu[j] >= max - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    printf("-----------------------------------------------\n");

    for (i = 0; i <= 10; i++) {
        printf("%4d", i * 10);
    }

    printf("\n");
    return 0;
}