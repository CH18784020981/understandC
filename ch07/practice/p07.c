#include <stdio.h>

int main(void) {
    float fl;
    double db;
    long double ldb = 4.55;

    puts("请依次输入两个浮点数：");
    scanf("%f %lf", &fl, &db);
    printf("float型：%f\ndouble型：%f\nlong double型：%Lf", fl, db, ldb);

    return 0;
}
