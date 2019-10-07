#include <stdio.h>
#define NUM 80
void min_of(int v[], int n) {

    //int min = v[0];
    int i;
    int j;

    for (i = 0; i < n/2; i++) {

        j = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = j;
    }
}


int main(int argc, char const *argv[]) {

    int i , j;
    int a[NUM] ;
    printf("请输入数组大小：\n");
    scanf("%d", &j);



    for (i = 0; i < j; i++) {

        printf("请输入数组内值的大小：\n"); scanf("%d", &a[i]);

    }

    min_of(a, j);

    puts("输出数组各元素的值。");

    for (i = 0; i < j; i++) {
        printf("%d ", a[i]);
    }



    return 0;
}

