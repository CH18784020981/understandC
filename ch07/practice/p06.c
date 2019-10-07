#include <stdio.h>
#include <limits.h>

int main(void) {
    unsigned i, j;

    printf("无符号整型的最大值为： %u\n", UINT_MAX);

    puts("请输入一个整型数：");
    scanf("%u", &i);

    printf("将无符号整形最大值与输入整型数相加结果：%u\n", UINT_MAX + i);

    return 0;
}
