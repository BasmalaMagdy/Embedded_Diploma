/*
 ============================================================================
 Name        : ex1.c
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
	int a;
	printf("Enter value of a: ");
	scanf("%d",&a);

	if(a % 2 == 0)
	{
		printf("%d is even",a);
	}
	else
	{
		printf("%d is odd",a);
	}
	return 0;
}
