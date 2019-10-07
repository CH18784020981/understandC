#include <stdio.h>
#include <string.h>
#define NUMBER 80
void del_digit(char s[]) {
    int i, j = 0;

    for (i = 0; i < strlen(s); i++) {
        if (s[i] < '0' || s[i] > '9') {

            // if (s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9') {
            putchar(s[i]);
        }
    }

    putchar('\n');

}
int main(int argc, char const *argv[]) {
    char s[NUMBER];
    int i;

    printf("输入字符串：\n"); scanf("%s", s);

    del_digit(s);

    return 0;
}