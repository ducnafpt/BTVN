#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n: \n");
	scanf("%d", &n);
	if((n % 2 == 1) && (n % 3 != 0) && (n % 5 != 0)){
		printf("n la so nguyen to \n");
	}else{
		printf("n khong la so nguyen to \n");
	}
}
