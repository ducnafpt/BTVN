#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d", &n);
	if(n <= 2){
		printf("Khong tim duoc \n");
	}else{
		for(int i = 2; i < n; i++)
		{
			int count = 0;
			for(int j = 1; j <= i; j++)
			{
				if(i % j == 0){
					count++;
				}
			}
			if(count == 2){
				printf("%d la so nguyen to \n", i);
			}
		}
	}
	return 0;
}
