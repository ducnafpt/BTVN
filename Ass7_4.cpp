#include <stdio.h>
int main(){
   int ary[4][3] = {2,4,6,8,10,1,3,5,7,9,11,13};
	int temp;
   
   for (int i = 0; i < 4; i++) 
	{
      for (int j = 0; j < 3; j++) 
		{
         printf("%d \t", ary[i][j]);
      }
   }
   printf("Ma tran vua nhap la: \n");
   
   for (int i = 0; i < 4; i++) 
	{
      printf("\n");
      for (int j = 0; j < 3; j++) 
		{
         printf("%d \t", ary[i][j]);
      }
   }
   
   for (int i = 1; i < 4; i++) 
	{
      for (int j = 0; j < i; j++)
      {
		   temp = ary[i][j];
         ary[i][j] = ary[j][i];
         ary[j][i] = temp;
      }
   }
   printf("Ma tran chuyen vi la: \n");
   
   for (int i = 0; i < 4; i++)
	{
      printf("\n");
      for (int j = 0; j < 3; j++)
		{
         printf("%d \t", ary[i][j]);
      }
   }
   return (0);
}

