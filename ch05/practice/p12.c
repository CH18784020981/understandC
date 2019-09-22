#include <stdio.h>

int main(void)
{
	int i, j, k;
	int tensu[4][2][3] = { { {91, 63, 78},{97, 67, 82} }, { {67, 72, 46},{73, 43, 46} }, { {89, 34, 53},{97, 56, 21} }, { {32, 54, 34},{85, 46, 35} } };

	/* 输出三维数组 */
	for (i = 0; i < 4; i++) {							
		for (j = 0; j < 2; j++)	
			for (k = 0; k < 3; k++)						
				printf("%d ",tensu[i][j][k]);
		printf("\n");
	printf("\n");
	}


	return 0;
}