/*
 ============================================================================
 Name        : ex3.c
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

	char str[50];
	char restr[50];
	char *ptr = str;
	char *reptr = restr;
	printf("Input a string : ");
	gets(str);

	int i = 0;
	for(i = 0 ; *ptr != '\0'; i++)
	{
		ptr++;
	}
	while(i >= 0)
	{
		ptr--;
		*reptr = *ptr;
		reptr++;
		i--;
	}
	*reptr = '\0';
	printf("\n");
	printf("Reverse of the string is : %s\n" , restr);

	return 0;
}
