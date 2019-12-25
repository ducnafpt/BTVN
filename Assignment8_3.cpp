#include <stdio.h>
int timhangmax(int a[4][4]){
	int max = 0, hang = 0;
	for (int i = 0; i < 4; i++)
	{
		int tong = 0;
		for (int j = 0; j < 4; j++)
		{
			tong += a[i][j];
		}
		if(i == 0){
			max = tong;
		}
		if(tong > max){
			max = tong;
			hang = i;
		}
	}
	return 0;
}
int main(){
	int a[4][4] = {1,2,5,6,8,9,4,6,13,43,66,44,14,65,77,22};
	printf("Hang co tong lon nhat la: %d \n", timhangmax(a));
}

