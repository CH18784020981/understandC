#include <stdio.h>
void sort3(int *n1, int *n2, int *n3) {

    int temp;

    if (*n1 > *n2) {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }

    if (*n1 > *n3) {
        temp = *n1;
        *n1 = *n3;
        *n3 = temp;
    }

    if (*n2 > *n3) {
        temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    }


}
int main(int argc, char const *argv[]) {
    int a, b, c;
    printf("请输入：\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sort3(&a, &b, &c);
    printf("升序排名：\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}