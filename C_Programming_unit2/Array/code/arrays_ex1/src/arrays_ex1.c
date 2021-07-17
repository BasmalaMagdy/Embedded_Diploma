/*
 ============================================================================
 Name        : arrays_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float a[2][2] , b[2][2] , sum[2][2];
	int i , j;
   printf("Enter the elements of 1st matrix");
   for(i = 0; i < 2; i++)
   {
	   for(j = 0; j < 2; j++)
	   {
		   printf("\nEnter a%d%d: ",i+1,j+1);
		   scanf("%f",&a[i][j]);
	   }
   }
   printf("Enter the elements of 2nd matrix");
   for(i = 0; i < 2; i++)
   {
	   for(j = 0; j < 2; j++)
	   {
		   printf("\nEnter a%d%d: ",i+1,j+1);
		   scanf("%f",&b[i][j]);
	   }
   }
   printf("Sum of matrix\n");
   for(i = 0; i < 2; i++)
   {
	   for(j = 0; j < 2; j++)
	   {
           sum[i][j] = a[i][j] + b[i][j];
           printf("%f  ",sum[i][j]);
	   }
	   printf("\n");
   }
	return 0;
}
