#include <stdio.h>

enum gender {Spring, Summer, Autumn , Winter};

enum season {male, female};

void spring(void) {
    puts("春天了");
}
void summer(void) {
    puts("夏天了");
}
void autumn(void) {
    puts("秋天啦");
}
void winter(void) {
    puts("冬天啰");
}
void Male(void) {
    puts("我是一个男人");
}
void Female(void) {
    puts("女人，你够了");
}
int main(int argc, char const *argv[]) {

    int x;
    printf("select gender\n0...male\n1...female\n");
    scanf("%d", &x);

    switch (x) {
    case 0: Male(); break;

    case 1: Female(); break;

    }

    printf("select season\n0...spring\n1...summer\n2...autumn\n3...winter\n");
    scanf("%d", &x);

    switch (x) {
    case 0: spring(); break;

    case 1: summer(); break;

    case 2: autumn(); break;

    case 3: winter(); break;
    }

    return 0;
}
