#include <stdio.h>
#define NUMBER 80
//int str_char(const char s[], int c) {
int str_chnum(const char *s, int c) {
    int i;
    int j = 0;

    for (int i = 0; i < c; i++) {
        j++;

        if (*(s + i) == 'c') {
            return j;
            break;
        }
    }

    return NULL;
}

int main(int argc, char const *argv[]) {


    char s[NUMBER];
    printf("请输入字符串：\n");
    scanf("%s", s);
    printf("字符串中c的下标为%d\n", str_chnum(s, NUMBER));




    return 0;
}