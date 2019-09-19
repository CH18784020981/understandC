#include <stdio.h>
int main(int argc, char const *argv[]) {
    printf("开始数值（cm）：155\n");
    printf("结束数值（cm）：190\n");
    printf("间隔数值（cm）：5\n");
    printf("\n");

    int a;

    for (int i = 155; i <= 190; i += 5) {
        printf("%dcm      %.2fkg\n", i, (i - 100) * 0.9);



    }

    return 0;
}