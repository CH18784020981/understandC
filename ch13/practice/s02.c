#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void one() {
    int a, b, c;
    int d[128];
    srand((unsigned)time(NULL));
    c = rand() % 10;
    printf("请输入你想猜的次数\n");
    scanf("%d", &a);
    int i;
    int count = 1;

    for (i = 1; i <= a; i++) {
        printf("请输入你猜的数\n");
        scanf("%d", &d[i]);

        if (c == d[i]) {
            printf("恭喜你猜对了！！！\n");
            b = d[i];
            break;
        }

        d [i] > c ? printf("大了\n") : printf("小了\n");
        count++;

    }

    for (i = 1; i <= count; i++) {
        printf("猜题记录\n%d\t%d\t%d", i, d[i], d[i] - c);
    }
}
void two()  {
    int a, b, c;
    int d[128];
    srand((unsigned)time(NULL));
    c = rand() % 10;
    printf("请输入你想猜的次数\n");
    scanf("%d", &a);
    int i;
    int count = 1;

    for (i = 1; i <= a; i++) {
        printf("请输入你猜的数\n");
        scanf("%d", &d[i]);

        if (c == d[i]) {
            printf("恭喜你猜对了！！！\n");
            b = d[i];
            break;
        }

        d [i] > c ? printf("大了\n") : printf("小了\n");
        count++;

    }

    for (i = 1; i <= count; i++) {
        printf("猜题记录\n%d\t%d\t%d", i, d[i], d[i] - c);
    }
}


void three()  {
    int a, b, c;
    int d[128];
    srand((unsigned)time(NULL));
    c = rand() % 10;
    printf("请输入你想猜的次数\n");
    scanf("%d", &a);
    int i;
    int count = 1;

    for (i = 1; i <= a; i++) {
        printf("请输入你猜的数\n");
        scanf("%d", &d[i]);

        if (c == d[i]) {
            printf("恭喜你猜对了！！！\n");
            b = d[i];
            break;
        }

        d [i] > c ? printf("大了\n") : printf("小了\n");
        count++;

    }

    for (i = 1; i <= count; i++) {
        printf("猜题记录\n%d\t%d\t%d", i, d[i], d[i] - c);
    }
}

void four()  {
    int a, b, c;
    int d[128];
    srand((unsigned)time(NULL));
    c = rand() % 10;
    printf("请输入你想猜的次数\n");
    scanf("%d", &a);
    int i;
    int count = 1;

    for (i = 1; i <= a; i++) {
        printf("请输入你猜的数\n");
        scanf("%d", &d[i]);

        if (c == d[i]) {
            printf("恭喜你猜对了！！！\n");
            b = d[i];
            break;
        }

        d [i] > c ? printf("大了\n") : printf("小了\n");
        count++;

    }

    for (i = 1; i <= count; i++) {
        printf("猜题记录\n%d\t%d\t%d", i, d[i], d[i] - c);
    }
}


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