#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d", &n);
	int ary[n];
	for (int i = 0; i < n; i++)
	{
		printf("Nhap ary[%d]: \n", i);
		scanf("%d", &ary[i]);
	}
	int count = 0, max_count = 0; 
	int tong = 0, max_tong = 0;
	for (int i = 0; i < n; i++)
	{
		if(ary[i] > 0){
			count++;
			tong += ary[i];
			if(count > max_count){
				max_count = count;
				if(tong > max_tong){
					max_tong = tong;
				}
			}
		}else{
			count = 0;
		}
	}
	printf("Tong lon nhat la: %d \n", max_tong);
	return 0;
}
