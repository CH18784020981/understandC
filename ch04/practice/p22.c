#include <stdio.h>

int main(void) {
    int i , j;
    int height, width;

    puts("让我们来画一个长方形。");
    scanf("%d", &height);
    scanf("%d", &width);

    if (height >= width) {


        printf("列：%d\n", height);
        printf("行：%d\n", width);

        for (i = 1; i <= width; i ++) {
            for (j = 1; j <= height; j++) {
                putchar('*');
            }

            putchar('\n');
        }
    } else {

        printf("行：%d\n", height);
        printf("列：%d\n", width);

        for (i = 1; i <= height; i ++) {
            for (j = 1; j <= width; j++) {
                putchar('*');
            }

            putchar('\n');

        }

        return 0;
    }
}