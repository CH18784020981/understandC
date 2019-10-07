#include <stdio.h>

void adjust_point(int *n) {
//int i,j;
    if (*n < 0) {
        *n = 0;
    } else if (*n > 100) {
        *n = 100;
    }
}
int main(int argc, char const *argv[]) {
    int a;
    printf("输入值\n");
    scanf("%d", &a);
    adjust_point(&a);
    printf("%d\n", a);
    return 0;
}