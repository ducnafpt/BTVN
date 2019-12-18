#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d", &n);
	int ary[n];
	for (int i = 0; i < n; i++)
	{
		printf("Nhap ary[%d]: \n", i);
		scanf("%d", &ary[i]);
	}
	int min = ary[0];
	for (int i = 1; i < n; i++)
	{
		if(ary[i] < min && ary[i] > 0){
			min = ary[i];
		}
	}
	printf("Min: %d \n", ary[i]);
	return 0;
}


