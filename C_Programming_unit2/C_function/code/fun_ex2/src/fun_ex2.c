/*
 ============================================================================
 Name        : fun_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1 ;
	printf("Enter an positive integer: ");
	scanf("%d ",&num1 );

	//f = factorial(num1);
	printf("factorial of %d = %d" , num1 ,factorial(num1));

	return 0;
}
int factorial(int n)
{
	if(n != 1)
	{
		return n*factorial(n-1);
	}
	else
	{
		return 1;
	}

}
