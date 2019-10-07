/*
    字符串数组
*/
#include <stdio.h>

int main(void) {


    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};
    int q;
    int o;
    q = sizeof(a) / sizeof(a[0]);
    o = sizeof(p) / sizeof(p[0]);

    int i;


    for (i = 0; i < q; i++) {
        printf("a[%d] = \"%s\"\n", i, a[i]);
    }

    for (i = 0; i < o; i++) {
        printf("p[%d] = \"%s\"\n", i, p[i]);
    }

    return 0;
}