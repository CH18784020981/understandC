#include <stdio.h>

int main(void) {
    float fl;
    double db;
    long double ldb;

    printf("float  %d\ndoble  %d\nlong double  %d\n", (unsigned)sizeof(fl), (unsigned)sizeof(db), (unsigned)sizeof(ldb));

    return 0;
}
