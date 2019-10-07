#include <stdio.h>
int main(int argc, char const *argv[]) {
    int n = 1;
    printf("sizeof 1  : %lu\n", sizeof(1));
    printf("sizeof +1 : %lu\n", sizeof(+1));
    printf("sizeof -1 : %lu\n", sizeof(-1));
    printf("sizeof(unsigned)-1 : %lu\n", sizeof(unsigned) - 1);
    printf("sizeof(double)-1   : %lu\n", sizeof(double) - 1);
    printf("sizeof((double)-1) : %lu\n", sizeof((double) - 1)); //将int型的-1强制转化为double型-1.0
    printf("sizeof n+2     : %lu\n", sizeof n + 2);
    printf("sizeof (n+2)   : %lu\n", sizeof(n + 2));
    printf("sizeof (n+2.0) : %lu\n", sizeof(n + 2.0));
    return 0;
}