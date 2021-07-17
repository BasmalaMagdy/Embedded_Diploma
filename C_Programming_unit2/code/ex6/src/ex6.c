/*
 ============================================================================
 Name        : ex6.c
 Author      : basmala
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
	int a ,i , sum = 0;
	printf("Enter an integer: ");
	scanf("%d",&a);

	for(i = 1; i <= a; i++)
	{
		sum += i;
	}
	printf("sum =%d " , sum);
	return 0;
}
