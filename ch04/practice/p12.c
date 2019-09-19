#include <stdio.h>

int main(void) {
    int no;
    int a = 0;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);

        if (no <= 0) {
            puts("请不要输入非正整数！！！");
        }
    } while (no <= 0);

    printf("该整数的位数是：");

    while (no > 0) {
        //no % 10;
        no /= 10;
        //printf("%d", a);

        a++;
    }

    printf("%d", a);
    puts("\n");

    return 0;
}