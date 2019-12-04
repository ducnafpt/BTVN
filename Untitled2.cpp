#include <stdio.h>
int main(){
	int a, b, c;
	printf("Nhap so thu nhat = \n");
	scanf("%d", &a);
	printf("Nhap so thu hai = \n");
	scanf("%d", &b);
	printf("Nhap so thu ba = \n");
	scanf("%d", &c);
	float delta;
	float x1, x2;
	delta = b*b - 4*a*c;
	if(delta < 0){
		printf("Phuong trinh ban dau vo nghiem \n");
	}else{
		if(delta == 0){
			printf("Phuong trinh ban dau co nghiem kep \n");
		}else{
			printf("Phuong trinh ban dau co hai nghiem phan biet x1, x2 \n");
		}
	}
}
