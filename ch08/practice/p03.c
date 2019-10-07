#include <stdio.h>
#define swap(type,a,b){int temp;temp=a;a=b;b=temp;}
	

int main(int argc, char const *argv[]) {

    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    swap(int , x , y);
    printf("%d%d\n", x, y);
    return 0;
}