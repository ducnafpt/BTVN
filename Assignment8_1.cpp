#include <stdio.h>
bool timkiem(int x, int a[], unsigned int n){
	for (int i = 0; i < n; i++)
	{
		if(x == a[i]){
			return true;
		}
	}
	return false;
}
int main(){
	int x = 13, ary[5] = {2, 3, 10, 13, 35};
	if(timkiem(x, ary, 5)){
		printf("Tim thay trong mang \n");
	}else{
		printf("Khong tim thay \n");
	}
	return 0;
}
