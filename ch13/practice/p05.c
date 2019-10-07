#include<stdio.h>
#include<time.h>

char data_file[] = "datatime.dat";
char temp[128];

void get_data(void) {
    FILE *fp;

    if ((fp = fopen(data_file, "r")) == NULL) {
        printf("本程序第一次运行。\n");
        printf("当前心情: ");
        scanf("%s", temp);
    } else {
        int year, month, day, h, m, s;

        fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
        printf("上一次运行是在%d年%d月%d日%d时%d分%d秒。\n",
               year, month, day, h, m, s);
        fscanf(fp, "%s", temp);
        printf("上一次心情: %s", temp);
        printf("当前心情: ");
        scanf("%s", temp);
        fclose(fp);
    }
}

void put_data(void) {
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if ((fp = fopen(data_file, "w")) == NULL) {
        printf("\a文件打开失败。\n");
    } else {
        fprintf(fp, "%d %d %d %d %d %d",
                timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
                timer->tm_hour,        timer->tm_min,     timer->tm_sec);
        fprintf(fp, "%s\n", temp);
        fclose(fp);
    }
}

int main(void) {
    get_data();
    put_data();

    return 0;
}
