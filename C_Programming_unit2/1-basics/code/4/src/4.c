/*
 ============================================================================
 Name        : 4.c
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
	float a , b , result = 0;

	printf("Enter two numbers:");
	scanf("%f %f",&a , &b);

		result = a * b;
		printf("Product: %f",result);
	return 0;
}
