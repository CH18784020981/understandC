#include <stdio.h>

double num1(double x, int n) {
    int i;
    double tmp = 1.0;

    for (i = 1; i <= n; i++) 
        tmp *= x;
    

    return tmp;

}
int main(int argc, char const *argv[]) {
    double a;
    int b;
    puts("求实数a的b次幂。");
    printf("实数a:\n"); scanf("%lf", &a);
    printf("实数b:\n"); scanf("%d", &b);
    printf("%.2f的%d次幂是%.2f\n", a, b, num1(a, b));
    return 0;
}