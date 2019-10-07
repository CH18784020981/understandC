#include <stdio.h>
char file_name[128];
int main(void) {
    int ch;
    int line_num = 0;
    FILE *fp;
    printf("input filename:");
    scanf("%s", file_name);

    if ((fp = fopen(file_name, "r")) == NULL) {
        printf("文件打开失败。\n");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch == '\n') {
                line_num++;
            }
        }

        printf("file has line number:%d", line_num);
    }

    return 0;
}
