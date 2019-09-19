#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b,sum;
	sum=0;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		for(;b<=a;b++)
			sum+=b;
		printf("%d\n",sum);
	}
	else if(a<=b){
		for(;a<=b;a++)
			sum+=a;
		printf("%d\n",sum);
	}
		



	return 0;
}