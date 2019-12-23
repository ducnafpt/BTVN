#include <stdio.h>
int main(){
	int ary[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("ary[%d][%d] = \n", i, j);
			scanf("%d", &ary[i][j]);
		}
	}
	int tong = 0;
	int tong2 = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if(i == j){
				tong += ary[i][j];
			}
			if(i + j == 3){
				tong2 += ary[i][j];
			}
		}
	}
	printf("TB duong cheo 1: %f \n", (float)tong/4);
	printf("TB duong cheo 2: %f \n", (float)tong2/4);
	return 0;
}
