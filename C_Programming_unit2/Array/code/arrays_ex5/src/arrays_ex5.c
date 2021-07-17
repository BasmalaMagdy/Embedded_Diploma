/*
 ============================================================================
 Name        : arrays_ex5.c
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

	int n;
		int a[100], ind , element;
		printf("Enter number of elements: ");
		scanf("%d",&n);
		for(int i = 0 ; i < n ; i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Enter the element to be searched: ");
		scanf("%d",&element);

		for(int i = 0 ; i < n ; i++)
		{
			if(a[i] == element)
			{
				ind = i + 1;
				break;
			}
		}

		printf("Number found at the location = %d" , ind);



	return 0;
}
