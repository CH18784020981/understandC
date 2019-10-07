#include <stdio.h>

void put_string(const char *s) {
    while (*s) {
        printf("%c", *s);
        *s++;
    }

    return;
}

int main(void) {
    char sh[] = "123";
    put_string(sh);
    printf("\n");
    return 0;
}
