#include <stdio.h>
int main(){
	int a;
	printf("Nhap vao so a: \n");
	scanf("%d", &a);
	if((a >= 2) && (a <= 8)){
		if(a == 2){
			printf("Hom nay la thu hai \n");
		}else{
			if(a == 8){
				printf("Hom nay la chu nhat \n");
		}else{
			int thu = a;
			printf("Hom nay la thu %d", a);
		}
	}
}else
		printf("Khong phai ngay trong tuan \n");
		return 0;	
}
