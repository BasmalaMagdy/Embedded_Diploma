/*
 ============================================================================
 Name        : 3.c
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
	int a , b , result = 0;

	printf("Enter two integers:");
	scanf("%d %d",&a , &b);

		result = a + b;
		printf("sum: %d",result);

	return 0;
}
