#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d", &n);
	if(n <= 0){
		printf("Khong tim duoc \n");
	}else if(n < 3){
		printf("Tong la 2 \n");
	}else if(n < 4){
		printf("Tong la 4 \n");
	}else{
		int x1 = 1, x2 = 1, x3 = 2;
		int s = x1 + x2 + x3;
		for(int i = 4; i <= n; i++)
		{
			x1 = x2;
			x2 = x3;
			x3 = x1 + x2;
			s = s + x3;
		}
		printf("So thu %d la %d \n", n, x3);
		printf("Tong %d so dau tien la: %d \n", n, s);
	}
}
