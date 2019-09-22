#include <stdio.h>

#define stu 6
#define lesson 2 

int main (void)
{
	int i, j;
	
	double la[stu][lesson], sum0, sum1 = 0, sum2 = 0;
	//sum0为各学生总成绩，sum1为语文总成绩， sum2为数学总成绩。 
	
	for(i = 0; i < stu; i++){
		sum0 = 0;
		for(j = 0; j < lesson; j++){
			do{
				printf("请输入第%d名学生第%d门成绩。",i+1,j+1);
				scanf("%lf",&la[i][j]);
				if (j == 0) 
					sum1+=la[i][j];
				else
					sum2+=la[i][j];
				if(la[i][j] > 100 || la[i][j] < 0){
					printf("您输入的值过大，请重新输入。");
				}
			} while (la[i][j] > 100 || la[i][j] < 0);
			
			sum0+=la[i][j];
	}
			printf("第%d名学生的总分为%f,平均分为%f\n",i+1,sum0,sum0/lesson);
}

	printf("语文成绩的总分为%f,平均分为%f,数学成绩的总分为%f,平均分为%f\n",sum1,sum1/stu,sum2,sum2/stu);
	 
	return 0;
 }