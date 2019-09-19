#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a==b)
    {
        printf("1\n");
    }
    else if (a>b)
    {
        printf("1\n");
        /* code */
    }
        
    else
    printf("0\n");    
    printf("%d\n",(a>b)?1:0 );

    return 0;
}