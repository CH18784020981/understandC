#include <stdio.h>
int main(int argc, char const *argv[]) {
    int n;
    printf("n的值:");
    scanf("%d", &n);

    for (int i= 1;i <= n; i++) {
        printf("%d的二次方是%d\n", i, i * i);
    }



    return 0;
}