#include <stdio.h>
int main(int argc, char const *argv[]) {

    int b;
    printf("输入数字\n");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++) {
        printf("*");

        if (i % 5 == 0) {
            printf("\n");
        }
    }

    return 0;
}
