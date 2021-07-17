/*
 ============================================================================
 Name        : string_ex2.c
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


	char str[100] ;
	int count = 0;
	printf("Enter a string: ");
	gets(str);

	for(int i = 0 ; str[i] != '\0' ; i++)
	{
			count ++;
	}
	printf("Length of string:  %d",count);

	return 0;
}
