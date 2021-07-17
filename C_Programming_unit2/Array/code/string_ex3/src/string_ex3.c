/*
 ============================================================================
 Name        : string_ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[100] ;

	printf("Enter a string: ");
	gets(str);

	printf("Reverse string is: ");
	for(int i = 0 ; i < strlen(str) ; i++)
	{
		//rev[i] = str[strlen(str)-i-1];
		printf("%c" , str[strlen(str)-i-1]);
	}

	return 0;
}
