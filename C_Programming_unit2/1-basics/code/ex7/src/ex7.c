/*
 ============================================================================
 Name        : ex7.c
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
	int a ,i , Fac = 1;
	printf("Enter an integer: ");
	scanf("%d",&a);

	if (a == 0)
	{
		Fac = 1;
		printf("Factorial = %d",Fac);
	}
	else if (a > 0)
	{
		for(i = 1; i <= a; i++)
		{
			Fac *= i;
		}
		printf("Factorial = %d",Fac);
	}
	else if (a < 0)
	{

		printf("Error!!!Factorial of negative number doesn't exist");
	}
	return 0;
}
