/*
 ============================================================================
 Name        : ex3.c
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

	float a ,b ,c;
	printf("Enter three num: ");
	scanf("%f \n %f \n %f",&a ,&b ,&c);

	if (a > b)
	{
		if(a > c)
		{
			printf("the largest num = %f",a);
		}
		else
		{
			printf("the largest num = %f",c);
		}
	}
	else if(b > c)
	{
		printf("the largest num = %f",b);
	}
	else
	{
		printf("the largest num = %f",c);
	}
	return 0;
}
