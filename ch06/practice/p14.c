#include <stdio.h>

#define NUM 10

int main(int argc, char const *argv[]) {
    static double a[NUM];

    for (int i = 0; i < NUM; i++) {
        printf("%.1f\n", a[i]);
    }

    return 0;
}