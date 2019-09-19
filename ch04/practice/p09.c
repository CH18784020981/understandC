#include <stdio.h>
int main(int argc, char const *argv[]) {
    int a=1;


    
        int b;
        int c = 0;
        printf("输入数字\n");
        scanf("%d", &b);

    do {
        if (c < b && c % 2 == 0) {
            printf("+");
        } else if (c < b && c % 2 != 0) {
            printf("-");
        }

        c++;

        if (c == b) {
            break;
        }
    } while (a==1);

    return 0;
}
