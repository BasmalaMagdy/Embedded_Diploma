/*
 ============================================================================
 Name        : arrays_ex2.c
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
	int n , i;
	float a[100] , sum , average;
	printf("Enter the number of data: ");
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++)
	{
		printf("\nEnter number:  ");
		scanf("%f",&a[i]);
	}
	for(i = 0 ; i < n ; i++)
	{
		sum += a[i];
	}
	average = sum / n;
	printf("\nAverage: %f ",average);
	return 0;
}
