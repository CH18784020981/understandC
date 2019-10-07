#include <stdio.h>

int sumup(int n) {
    int sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    return sum;

}

int main(int argc, char const *argv[]) {
    int a;
    printf("请输入一个整数：\n");
    scanf("%d", &a);
    printf("1到%d之间所有整数的和%d\n",a, sumup(a));
    return 0;
}