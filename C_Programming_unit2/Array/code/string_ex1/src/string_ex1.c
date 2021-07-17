/*
 ============================================================================
 Name        : string_ex1.c
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

	char str[100] , c;
	int count = 0;
	printf("Enter a string: ");
	gets(str);

	printf("Enter a character to find frequency: ");
	scanf("%c",&c);

	for(int i = 0 ; str[i] != '\0' ; i++)
	{
		if(str[i] == c)
		{
			count ++;
		}
	}
	printf("Frequency of %c :  %d",c,count);

	return 0;
}
