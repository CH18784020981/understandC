#include <stdio.h>
#include <string.h>
#define NUMBER 3
void rev_string(char s[][128], int n) {
    int i, j, k;

    for (i = 0; i < n; i++) {
        //j = 0;
        for (j = 0; j < strlen(s[i])-1; j++) {
            /* code */

            // while (s[i][j]){
            //     j++;

            for (k = 0; k < j / 2; k++) {
                int temp;
                temp = s[i][k];
                s[i][k] = s[i][j - k - 1];
                s[i][j - k - 1] = temp;
            }
        }
    }
}
int main(int argc, char const *argv[]) {
    int i;
    char str[NUMBER][128];
    printf("请输入%d组字符串\n", NUMBER);

    for (int i = 0; i < NUMBER; i++) {
        printf("s[%d]=", i);
        scanf("%s", str[i]);

    }

    printf("转换后的字符串为：\n");
    rev_string(str, NUMBER);

    for (int i = 0; i < NUMBER; i++) {
        printf("s[%d]=\"%s\"\n", i, str[i]);
    }

    return 0;
}
