#include <stdio.h>
#define NUMBER 80
int str_chnum(const char s[], int c) {
    int i;
    int j = 0;

    {
        for (i = 0; i < c; i++) {

            if (s[i] == 'c') {
                j++;
            }
        }

        return j;

    }

    return 0;
}
int main(int argc, char const *argv[]) {
    char s[NUMBER];
    printf("请输入字符串\n");
    scanf("%s", s);
    printf("字符串中c的个数:%d\n", str_chnum(s, NUMBER));
    return 0;
}