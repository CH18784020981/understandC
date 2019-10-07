#include <stdio.h>

#define SYMBOL 80

void rev_intary(int v[], int n) {
    int temp, i;

    for (i = 0; i < n / 2; i++) {
        temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }
}

int main(void) {
    int n, v[SYMBOL], i;

    printf("请输入数组的元素个数:");
    scanf("%d", &n);

    printf("请输入数组各元素的值。");

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    rev_intary(v, n);

    puts("输入数组各元素的值。");

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
