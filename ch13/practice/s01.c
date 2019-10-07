//⽣生成随机数代码
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int a, b, c;
    char input;

    do {
        srand((unsigned)time(NULL));
        a = 0;
        b = 99;
        c = rand() % (b + 1 - a);

        if (c >= 0 && c <= 4) {
            printf("大吉\n");
        }

        if (c >= 4 && c <= 14) {
            printf("中吉\n");
        }

        if (c >= 14 && c <= 29) {
            printf("小吉\n");
        }

        if (c >= 29 && c <= 59) {
            printf("吉\n");
        }

        if (c >= 59 && c <= 79) {
            printf("末吉\n");
        }

        if (c >= 79 && c <= 94) {
            printf("凶\n");
        }

        if (c >= 94 && c <= 99) {
            printf("大凶\n");
        }

        printf("退出....0\n");
        scanf("%s", &input);
    } while (input != '0' && getchar() == '\n');

    return 0;
}