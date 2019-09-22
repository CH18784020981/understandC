#include <stdio.h>
#define NUMBER 80
int main(int argc, char const *argv[]) {
    int n, m=0;
    int a[80];
    printf("输入学生人数\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);


        if (a[i] >= 60) {
            m++;
        }
    }

    printf("及格人数%d\n", m);
    printf("不及格人数%d\n",n-m);




    return 0;
}