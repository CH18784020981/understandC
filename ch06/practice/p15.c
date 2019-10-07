#include <stdio.h>
int i;
void put_count() {

    printf("put_count：第%d次\n", i+1);

}



int main(int argc, char const *argv[]) {
    int n;
    printf("请输入调用次数\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        put_count();
    }

    return 0;
}