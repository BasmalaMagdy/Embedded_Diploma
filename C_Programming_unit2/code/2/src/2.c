/*
 ============================================================================
 Name        : 2.c
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
	int a;
	printf("Enter a integer: ");
	scanf("%d",&a);
	printf("You entered:%d ",a);
	return 0;
}
