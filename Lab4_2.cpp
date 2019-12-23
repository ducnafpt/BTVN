#include <stdio.h>
int main(){
	int s = 0;
	for(int i = 1; i < 200; i++)
	{
		if(i % 2 != 0){
			s += i;
		}
	}
		printf("Tong la: %d \n", s);
}
