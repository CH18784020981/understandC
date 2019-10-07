/*
读取并显示字符串数组
*/
#include <stdio.h>
#define NUMBER 10
int compareString(char[], char[], int arrayLength);
int main(void) {
    int i;
    char s[NUMBER][128];

    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);

        if (compareString(s[i], "$$$$$", 5)) {
            break;
        }
    }

    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);

        if (compareString(s[i], "$$$$$", 5)) {
            break;
        }

        printf("s[%d] = \"%s\"\n", i, s[i]);
    }

    return 0;
}

int compareString(char target[], char source[], int arrayLength) {
    for (int i = 0; i < arrayLength; ++i) {
        if (target[i] !=  source[i]) {
            return 0;
        }

    }

    if (source[arrayLength] != '\0') {
        return 0;
    }

    return 1;
}

