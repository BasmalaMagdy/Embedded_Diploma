/*
 ============================================================================
 Name        : ex4.c
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
	float a;
	printf("Enter a num: ");
	scanf("%f",&a);

	if(a > 0)
	{
		printf("%f num is positive",a);
	}
	else if(a == 0)
	{
		printf("%f num is zero",a);
	}
	else if(a < 0)
	{
		printf("%f num is negative",a);
	}
	return 0;
}
