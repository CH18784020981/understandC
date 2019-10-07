
#include <stdio.h>

int main(void) {
    int i;
    float x, j = 0;

    for (i = 0; i <= 100; i++) {
        printf("x = %f  ", j);
        j += 0.01;
        x = i / 100.0;
        printf("x = %f\n", x);
    }

    return 0;
}
