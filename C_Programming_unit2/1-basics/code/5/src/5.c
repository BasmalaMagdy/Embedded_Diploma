/*
 ============================================================================
 Name        : 5.c
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
	char a;

	printf("Enter a character:");
	scanf("%c",&a);

		printf("ASCII value of %c = %d",a , a);
	return 0;
}
