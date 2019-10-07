/*
对字符串中的英文字符进行大小写转换
*/
#include <stdio.h>
/*将字符串中的英文字符转为大写字母*/
void str_toupper(char *s) {
    int i = 0;

    while (*s) {
        if (*s >= 'a' && *s <= 'z') {
            printf("小写字母%c转大写字母%c\n", *s, *s - 32);
            
            s++;
        }
    }
}

/*将字符串中的英文字符转为小写字母*/
void str_tolower(char *s) {
    int i = 0;

    while (*s) {
        if (*s >= 'A' && *s <= 'Z') {
            printf("大写字母%c转小写字母%c\n", *s, *s + 32);
            s++;
        }
    }
}

int main(void) {
    char str[128];
    char std[128];
    printf("请输入字符串：");
    scanf("%s", str);
    printf("请输入字符串：");
    scanf("%s", std);

    str_toupper(str);
    // printf("大写字母：%s\n", str);

    str_tolower(std);
    //printf("小写字母：%s\n", str);

    return 0;
}