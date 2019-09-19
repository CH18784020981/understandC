#include <stdio.h>
int main(int argc, char const *argv[]) {
    int a, c;

    printf("请输入一个数\n");
    scanf("%d", &a);

    for (int i = 0; i <= a; i++) {
        c += i;
    }

    printf("和为%d\n", c);
    return 0;
}