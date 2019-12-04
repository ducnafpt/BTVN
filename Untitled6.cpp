#include <stdio.h>
int main(){
	int x = 3, y = 5, n;
	printf("x = %d \n", x);
	printf("y = %d \n", y);
	n = x;
	x = y;
	y = n;
	printf("Sau khi hoan doi x = %d \n", x);
	printf("Sau khi hoan doi y = %d \n", y);
}
