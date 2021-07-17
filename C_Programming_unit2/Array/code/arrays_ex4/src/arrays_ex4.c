/*
 ============================================================================
 Name        : arrays_ex4.c
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
	int n , ind;
		int a[100] , a2[100] , loc , element;
		printf("Enter number of elements: ");
		scanf("%d",&n);
		for(int i = 0 ; i < n ; i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Enter the element to be inserted : ");
		scanf("%d",&element);

		printf("Enter the location: ");
		scanf("%d",&loc);

		n++; ind = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(i == (loc-1))
			{
               a2[i] = element;

			}
			else
			{
               a2[i] = a[ind];
               ind++;
			}

		}

		//printf("%d ", a2[5]);

		for(int i = 0 ; i < n ; i++)
		{
			printf("%d ", a2[i]);
		}


	return 0;
}
