#include <stdio.h>
char file_name[128];
int main(void) {
    int ch;
    int ch_num = 0;
    FILE *fp;
    printf("input filename:");
    scanf("%s", file_name);

    if ((fp = fopen(file_name, "r")) == NULL) {
        printf("文件打开失败。\n");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch != '\n') {
                ch_num++;
            }
        }

        printf("file has character number:%d", ch_num);
    }

    return 0;
}
