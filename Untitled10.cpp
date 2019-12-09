#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap vao hai so a, b: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	if(a >= b){
		int c = a/b;
		printf("Ket qua la: %d \n", c);
	}else{
		int d = a*b;
		printf("Ket qua la: %d \n", d);
	}
		return 0;
}
