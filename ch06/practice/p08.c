#include <stdio.h>
#define NUM 80
int min_of(const int v[], int n) {

    int min = v[0];
    int i;

    for (i = 1; i < n; i++)

        if (v[i] < min) {
            min = v[i];
        }

    return min;
}


int main(int argc, char const *argv[]) {

    int i , j;
    int a[NUM] ;
    printf("请输入数组大小：\n");
    scanf("%d", &j);

    for (i = 0; i < j; i++) {

        printf("请输入数组内值的大小：\n"); scanf("%d", &a[i]);

    }

    printf("数组中元素最小值为%d\n", min_of(a, j));

    return 0;
}

