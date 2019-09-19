#include <stdio.h>

int main(void) {
    int i , j;
    int height, width;

    puts("让我们来画一个长方形。");
    scanf("%d", &height);
    printf("高：%d\n", height);
    printf("宽：%d\n", height);

    for (i = 1; i <= height; i ++) {
        for (j = 1; j <= height; j++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}