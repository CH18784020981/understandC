#include <stdio.h>
int main(int argc, char const *argv[]) {
    char s[] = "ABC";
    //scanf("%s", s);
    printf("字符串为\"%s\"\n", s);

    s[0]='\0';
    printf("字符串为\"%s\"\n", s);
    return 0;
}