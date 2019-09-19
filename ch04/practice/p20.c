#include <stdio.h>
int main(void)
{
    int i , j;

    for (i = 1; i <= 9; i ++) {

    	printf("%d ", i);
        for (j = 1; j <= i; j++)
        	
            printf("%d*%d=%2d  ",i,j, i * j);
        putchar('\n');
    }

    printf("---1------2-------3--------4------5------6--------7--------8--------9----\n");
    return 0;
}