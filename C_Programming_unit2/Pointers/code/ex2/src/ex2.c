/*
 ============================================================================
 Name        : ex2.c
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

	char ch[27];
	char *ptr;
	ptr = ch;
	for(int i = 0 ; i < 26 ; i++)
	{
		*ptr = 'A'+i;
		ptr++;
	}
	ptr = ch;
	printf("the alphapet is : ");
	for(int i = 0 ; i < 26 ; i++)
	{
        printf(" %c",*ptr);
        ptr++;
	}
	return 0;
}
