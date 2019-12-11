#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d", &n);
	int s = 1;
	for(int i = 1; i <= n; i++)
	{
		s = s*i; 
	}
	printf("Ket qua la: %d \n", s);
}

