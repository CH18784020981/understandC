#include <stdio.h>
int main(void) {
    FILE *fp;
    double haha[10] = {1.1,
                       2.2,
                       3.3,
                       4.4,
                       5.5,
                       6.6,
                       7.7,
                       8.8,
                       9.9,
                       10.10
                      };
    int i;

    for (i = 0; i < 10; i++) {
        printf("从数组haha得到的元素haha[%d]为%23.21f。\n", i, haha[i]);
    }

    return 0;
}
