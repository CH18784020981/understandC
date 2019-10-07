#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;

    } else {
        return b;
    }

}
int main(int argc, char const *argv[]) {
    int n1, n2;

    puts("请输入两个整数：");
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("较大的数是：%d\n", max(n1, n2));
    return 0;
}
