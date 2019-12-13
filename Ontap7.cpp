#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d", &n);
	int count = 0;
	while(n >= 10){
		n = n / 10;
		count = count + 1;
	}
	printf("So chu so cua n la: %d \n", count + 1);
}
