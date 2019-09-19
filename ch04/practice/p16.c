#include <stdio.h>
int main(int argc, char const *argv[]) {
    int n;
    printf("整数值:");
    scanf("%d", &n);

    for (int i= 1;i <= n; i++) {
       if (i%2==1)
       {
           printf("%d ", i);
       }
    }
printf("\n");


    return 0;
}