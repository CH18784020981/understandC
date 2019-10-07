
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{	int input;
	do {
		printf("请输入：1：剪刀，2：石头，3：布\n" );
		srand((unsigned)time(NULL));
		int a, b, c, d;
		b = 1;
		c = 4;
		a = rand() % (c - b) + b;
		//d=rand()%(c-b)+b;
		printf("请输入一个整数：\n");
		scanf("%d", &d);
		//if (scanf("%d", &d) != 0)
		while (getchar() != '\n');
		//continue;
		switch (d) {
		case 1: printf("我出手啦：剪刀\n"); break;
		case 2: printf("我出手啦：石头\n"); break;
		case 3: printf("我出手啦：布\n"); break;
		default: printf("错误的输入");
		}
		switch (a) {
		case 1: printf("计算机出手啦：剪刀\n"); break;
		case 2: printf("计算机出手啦：石头\n"); break;
		case 3: printf("计算机出手啦：布\n"); break;
		}
		if (d == 2 && a == 1) {
			printf("我赢了\n");
		}
		else if (d == 3 && a == 2) {
			printf("我赢了\n");
		}
		else if (d == 1 && a == 3) {
			printf("我赢了\n");
		}

		else if (a == 2 && d == 1) {
			printf("计算机赢了\n");
		}

		else if (a == 3 && d == 2) {
			printf("计算机赢了\n");
		}
		else if (a == 1 && d == 3) {
			printf("计算机赢了\n");
		}
		else if (a == d)
		{
			printf("平手\n");
		}
		printf("是否退出？0.退出1-9.继续\n");
		scanf("%d", &input);
		//if (scanf("%d", &input) != 0)
		while (getchar() != '\n');
		//continue;
	} while (input != 0);
	return 0;
}