/*
 ============================================================================
 Name        : ex2.c
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
	printf("Enter an alphabet: ");
	scanf("%c",&i);

	if((i == 'a') || (i == 'e')|| (i == 'i')|| (i == 'o')|| (i == 'u'))
	{
		printf("%c is a vowel",i);
	}
	else
	{
		printf("%c is a consonant",i);
	}
	return 0;
}
