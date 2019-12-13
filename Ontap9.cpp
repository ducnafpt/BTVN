#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap a: \n");
	scanf("%d", &a);
	printf("Nhap b: \n");
	scanf("%d", &b);
	int c;
	for(int i = 1; i <= a && i <= b; i++)
	{
		if(a % i == 0 && b % i == 0){
		c = i;
		}
	}
	printf("Uoc chung lon nhat la: %d \n", c);
	return 0;
}
