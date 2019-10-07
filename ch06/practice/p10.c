#include <stdio.h>

#define SYMBOL 80

void intary_rcpy(int v1[], const int v2[], int n) {
    int temp, i;
    temp = n - 1;

    for (i = 0; i < n; i++) {
        v1[temp--] = v2[i];
    }
}

int main(void) {
    int n, v1[SYMBOL], v2[SYMBOL], i;

    printf("请输入数组的元素个数:");
    scanf("%d", &n);

    printf("请输入数组各元素的值。");

    for (i = 0; i < n; i++) {
        scanf("%d", &v2[i]);
    }

    intary_rcpy(v1, v2, n);

    for (i = 0; i < n; i++) {
        printf("%d ", v1[i]);
     }

    return 0;
}
