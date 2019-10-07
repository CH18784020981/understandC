#include <stdio.h>
int main(void) {
    int n;
    int ch;
    FILE *sfp;						/* 原文件 */
    FILE *dfp;						/* 目标文件 */
    char sname[FILENAME_MAX];		/* 原文件名 */
    char dname[FILENAME_MAX];		/* 目标文件名 */

    printf("打开原文件：");   scanf("%s", sname);
    printf("打开目标文件：");   scanf("%s", dname);

    if ((sfp = fopen(sname, "rb")) == NULL) {
        printf("\a原文件打开失败。\n");
    } else {
        if ((dfp = fopen(dname, "wb")) == NULL) {
            printf("\a目标文件打开失败。\n");
        } else {
            while (n = fread(&ch, sizeof(int), 1, sfp) > 0) {
                fwrite(&ch, sizeof(int), 1, dfp);
            }

            fclose(dfp);
        }

        fclose(sfp);
        printf("done!\n");
    }

    return 0;
}
