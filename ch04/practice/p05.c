#include <stdio.h>

int main(void) {
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    if (no < 0) {
    } else {
        i = 1;

        while (i <= no) {
            printf("%d ", i++);
        }

        printf("\n");
    }

    return 0;
}