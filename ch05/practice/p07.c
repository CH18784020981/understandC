#include <stdio.h>

#define NUMBER 6    /*人数上限*/

int main(void) {
    int a[NUMBER] = {7, 8, 5, 3, 2, 3};
    printf("{");

    for (int i = 0; i < NUMBER; i++) {
        printf("a[%d]=%d, ", i, a[i]);
    }

    printf("}\n");
    return 0;
}