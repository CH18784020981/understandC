#include <stdio.h>
int main(int argc, char const *argv[]) {
    int a[2] = {1, 2};

    for (int i = 2; i > 0; i--) {
        printf("%d\n", a[i - 1]);

    }

    return 0;
}