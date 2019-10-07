#include<stdio.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schools;
};

int main(void) {
    struct student takao = {};
    printf("请输入姓名为:");	scanf("%s", &takao.name);
    printf("请输入身高为:");	scanf("%d", &takao.height);
    printf("请输入体重为:");	scanf("%f", &takao.weight);
    printf("请输入奖学金为:");	scanf("%ld", &takao.schools);

    printf("姓名 = %s\n", takao.name);
    printf("身高 = %d\n", takao.height);
    printf("体重 = %.1f\n", takao.weight);
    printf("奖学金 = %ld\n", takao.schools);

    return 0;
}
