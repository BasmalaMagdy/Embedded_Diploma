/*
 ============================================================================
 Name        : fun_ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int n , int p);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int n , p;
	printf("Enter base number: ");
	scanf("%d" , &n);

	printf("Enter power number(positive integer): ");
	scanf("%d" , &p);


	printf("%d ^ %d = %d" , n , p , power(n ,p));
	return 0;
}
int power(int n, int p)
{
	if(p != 1)
	{
		return n*power(n,p-1);
	}
	else
	{
		return n;
	}
}
