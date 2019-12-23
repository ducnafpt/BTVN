#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d", &n);
	float s = 0;
	
	for(int i = 1; i <= n; i++)
	{
		s += 1/float(i);
	}
		printf("Tong la: %f \n", s);
}

