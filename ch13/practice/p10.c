#include <stdio.h>
int main(void) {
    int ch;
    FILE *sfp;/* 原文件 */
    FILE *dfp;/* 目标文件 */
    char sname[FILENAME_MAX];/* 原文件名 */
    char dname[FILENAME_MAX];/* 目标文件名 */

    printf("打开原文件：");   scanf("%s", sname);
    printf("打开目标文件：");   scanf("%s", dname);

    if ((sfp = fopen(sname, "r")) == NULL) {
        printf("\a原文件打开失败。\n");
    } else {
        if ((dfp = fopen(dname, "w")) == NULL) {
            printf("\a目标文件打开失败。\n");
        } else {
            while ((ch = fgetc(sfp)) != EOF) {
                if ((ch >= 'A') && (ch <= 'Z')) {
                    ch += 32;
                }

                fputc(ch, dfp);//输出到目标文件
                printf("%c", ch);
            }

            fclose(dfp);
        }

        fclose(sfp);
    }

    return 0;
}
