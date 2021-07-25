/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415
#define area(r) (PI*r*r)

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int r;
	printf("Enter the redius : ");
	scanf("%d",&r);

	printf("Area = %f",area(r));

	return 0;
}
