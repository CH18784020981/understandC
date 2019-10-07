#include <stdio.h>

#define NUMBER 5

void set_idx(int *v, int n) {
    int i;

    for (int i = 0; i < n; ++i) {
        v[i] = i;
    }

    return;
}
int main(int argc, char const *argv[]) {
    int i;
    int a[NUMBER];
    set_idx(a, NUMBER);

    for (int i = 0; i < NUMBER; ++i) {
        printf("v[%d]=%d\n", i, a[i]);
    }

    return 0;
}