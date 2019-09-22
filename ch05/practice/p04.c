#include <stdio.h>
int main(void) {
    int i;
    int a[5] = {17, 23, 36};
    int b[5];

    for (i = 0; i < 3; i++) {
        b[i] = a[2-i];
    }

    puts("  a   b");
    puts("---------");

    for (i = 0; i < 3; i++) {
        printf("%4d%4d\n", a[i], b[i]);
    }

    return 0;
}