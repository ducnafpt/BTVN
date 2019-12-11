#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d", &n);
	int s = 0;
	for(int i = 1; i <= n; i++)
	{
		s = s*i; 
	}
	printf("Ket qua la: %d \n", s);
}

