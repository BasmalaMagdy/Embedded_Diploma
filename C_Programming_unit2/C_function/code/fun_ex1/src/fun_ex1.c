/*
 ============================================================================
 Name        : fun_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime_num(int n1 ,int n2);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1 , num2;
	printf("Enter two numbers (intervals) : ");
	scanf("%d %d",&num1 ,& num2);

	printf("Prime numbers between %d and %d are : " ,num1 , num2);

	prime_num(num1 , num2);

	return 0;
}

void prime_num(int n1 ,int n2)
{
	int f = 0;
	for(int i = n1 + 1 ; i < n2; i++)
	{
		for(int j = 2 ; j < i/2 ;j++)
		{
			if(i%j == 0)
			{
				f = 1;
				break;
			}
		}
		if(f == 0)
		{
			printf("%d ",i);
		}
		f = 0;
	}
}
