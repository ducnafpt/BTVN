#include <stdio.h>
int main(){
	int n, k;
	printf("Nhap n: \n");
	scanf("%d", &n);
	int s = 0;
	while(n > 0){
		k = n % 10;
		s = s + k;
		n = n / 10;
	}
	printf("Tong cac chu so cua n la: %d \n", s);
	return 0;
}
