/*
 ============================================================================
 Name        : ex8.c
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
	float a , b , result = 0;
	char c;
	printf("Enter operator + or - or * or /: ");
	scanf("%c",&c);
	printf("Enter two operands: ");
	scanf("%f  %f",&a , &b);

	if( c == '+')
	{
		result = a + b;
		printf("%f %c %f = %f", a,c ,b,result);
	}
	else if( c == '-')
	{
		result = a - b;
		printf("%f %c %f = %f", a,c ,b,result);
	}
	else if( c == '*')
	{
		result = a * b;
		printf("%f %c %f = %f", a,c ,b,result);
	}
	else if( c == '/')
	{
		result = a / b;
		printf("%f %c %f = %f", a,c ,b,result);
	}

	return 0;
}
