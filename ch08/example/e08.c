#include <stdio.h>

int main(int argc, char const *argv[]) {
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch != 10) {
            if (ch >= 97 && ch <= 122) {
                printf("小写字母%c转大写字母%c\n", ch, ch - 32);
            } else if (ch >= 65 && ch <= 90) {
                printf("大写字母%c转小写字母%c\n", ch, ch + 32);
            }

        }


    }

    printf("结束了\n");
    return 0;
}