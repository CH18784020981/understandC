#include<stdio.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schools;
};

int main(void) {
    struct student takao = {"Takao", 173, 86.32};

    printf("姓名的地址=%p\n", &takao.name);
    printf("身高的地址=%p\n", &takao.height);
    printf("体重的地址=%p\n", &takao.weight);
    printf("奖学金的地址=%p\n", &takao.schools);

    return 0;
}
