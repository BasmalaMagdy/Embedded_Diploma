/*
 ============================================================================
 Name        : fun_ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(char *const  str);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[100];
	printf("Enter a sentence : ");
	gets(str);

	Reverse(str);


	return 0;
}
void Reverse(char *const str)
{
	//int n = strlen(str);
	for(int i = strlen(str) - 1 ; i >= 0 ; i--)
	{
		printf("%c" , str[i]);
	}
}
