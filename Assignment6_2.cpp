#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n", &n);
	scanf("%d", &n);
	int ary[n];
	for(int i = 0; i < n; i++)
	{
		printf("Nhap ary[%d]: \n", i);
		scanf("%d", &ary[i]);
	}
	int tong = 0;
	int count = 0;
	float tbc;
	for(int i = 1; i < n; i+=2)
	{
		if(ary[i] % 2 != 0){
			tong += ary[i];
			count++;
		}
	}
	tbc = (float)tong/count;
	printf("Trung binh cong la: %f \n", tbc);
	return 0;
}
