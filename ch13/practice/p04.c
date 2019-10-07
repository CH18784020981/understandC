#include<stdio.h>

int main(void) {
    FILE *fp;
    char name[100];
    double height, weight;

    printf("请输入姓名，身高，体重。\n");
    scanf("%s %lf %lf", name, &height, &weight);

    if ((fp = fopen("dt_dat", "w")) == NULL) {
        printf("\a文件打开失败。\n");
    } else {
        printf("写出姓名，身高，体重。\n");
        fprintf(fp, "%s %lf %lf\n", name, height, weight);
        fclose(fp);
    }

    return 0;
}
