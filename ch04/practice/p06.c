#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b=0;
	printf("输入数字\n" );
	scanf("%d",&a);
	
		
	while(b<a){
		if (b % 2==0){
		printf("%d", b);
	}
		b++;
		
}
	
	return 0;
}	