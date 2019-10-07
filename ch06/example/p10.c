#include <stdio.h>



int main(int argc, char const *argv[]) {
    int a[4][3];
    int b[3][4];
    int n1, n2, n3, n4;
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; i < 3; j++) {
            printf("输入数字\n");
            scanf("%d", &a[i][j]);
        }
    }

    printf("%d\n", a[i][j]);
    return 0;
}
