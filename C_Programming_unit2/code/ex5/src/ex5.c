/*
 ============================================================================
 Name        : ex5.c
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

	char i;
	printf("Enter an character: ");
	scanf("%c",&i);

	if(((i >= 'a') && (i <= 'z')) || ((i >= 'A') && (i <= 'Z')))
	{
		printf("%c is a alphabet",i);
	}
	else
	{
		printf("%c is not a alphabet",i);
	}
	return 0;
}
