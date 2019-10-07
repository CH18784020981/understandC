#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int qian(int i, int n) {
    int k, m = 1;

    for (k = 1; k <= i; k++) {
        m *= 10;
    }

    n = rand() % m;
    return n;
}

int main(void) {
    int i, j, n, p;

    srand((unsigned)time(NULL));
begin: printf("选择难度：1，0～9--2，0～99--3，0～999--4，0～9999\n");
    scanf("%d", &i);
    printf("你想要几次机会?\n");
    printf("返回上一步 按“0”\n");
    scanf("%d", &j);

    if (j == 0) { goto begin; }

    n = qian(i, n);
    int m[128];

    for (int k = 0; k < j; k++) {
        printf("第%d次机会\n", k + 1);
        scanf("%d", &m[k]);

        if (m[k] == n)
        {printf("恭喜你答对了，bravo\n"); p = k; break;}

        if (m[k] > n) {
            printf("大了\n");
        } else if (m[k] < n) {
            printf("小了\n");
        }

        if (k == (j - 1)) {printf("结束了，没有猜出来哦\n");}

        p = k;
    }

    printf("输入记录：\n");

    for (int k = 0; k <= p; k++) {

        printf(" %3d  | %5d | %5d |\n", k + 1, m[k], m[k] - n);
    }

    return 0;
}


