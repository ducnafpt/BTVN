#include <stdio.h>
int main(){
	int a, b, c;
	
	do{
		printf("Nhap 3 so: \n");
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
	}while(!(a + b > c) || !(a + c > b) || !(b + c > a));
		printf("Day la 3 canh tam giac \n");
		return 0;
}
