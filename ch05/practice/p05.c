#include <stdio.h>

#define SYMBOL 7

int main(void) {
    int i;
    int x[SYMBOL];

    for (i = 0; i < SYMBOL; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 3; i++) {
        int temp = x[i];
        x[i] = x[6 - i];
        x[6 - i] = temp;
    }

    puts("倒序排列了。");

    for (i = 0; i < SYMBOL; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}