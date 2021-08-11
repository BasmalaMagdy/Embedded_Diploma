/*
 ============================================================================
 Name        : ex1.c
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

	int m = 29;
	printf("Address of m = %p \n", &m);
	printf("value of m =  %d\n", m);

	int *ab = &m;
	printf("Address of ab = %p \n", &ab);
	printf("value of ab = %d \n", *ab);

	m = 34;
	printf("Address of ab = %p \n", &ab);
	printf("value of ab = %d \n", *ab);

	*ab = 7;
	printf("Address of m = %p \n", &m);
	printf("value of m =  %d\n", m);

		return 0;
}
