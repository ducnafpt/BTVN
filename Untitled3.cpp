#include <stdio.h>
int main(){
	int a, b, c;
	printf("Nhap so thu nhat a = \n");
	scanf("%d", &a);
	printf("Nhap so thu hai b = \n");
	scanf("%d", &b);
	printf("Nhap so thu ba c = \n");
	scanf("%d", &c);
	if(a < b){
		if(a < c){
			printf("%d la so nho nhat \n", a);
		}else{
			printf("%d la so nho nhat \n", c);
		}
	}else{
		if(b < c){
			printf("%d la so nho nhat \n", b);
		}else{
			printf("%d la so nho nhat \n", c);
		}
	}	
}
