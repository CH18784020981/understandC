#include <stdio.h>
int main(int argc, char const *argv[]){
    

    int A,B;

    printf("请输入两个整数：\n");
    scanf("%d%d", &A,&B);
    if (A > B){
        puts("A大于B");
    }
            
    else if(A==B){
        puts("A等于B");
    }
            
    else{
        puts("A小于B\n");
    }

    return 0;
}
