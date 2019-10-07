#include <stdio.h>

int min2(int a, int b) {

    if (a > b) {
        return b;
    } else {
        return a;
    }


}


int main(int argc, char const *argv[]) {
    int n1, n2;
    printf("请输入第一个数\n"); scanf("%d", &n1);
    printf("请输入第二个数\n"); scanf("%d", &n2);
    printf("较小的数是%d\n", min2(n1, n2));
    printf("%s\n",&n1);
    return 0;

}