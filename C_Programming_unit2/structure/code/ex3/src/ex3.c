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

struct complex
{
	float real;
	float imag;
};
struct complex add(struct complex n1 ,struct complex n2);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct complex n1 , n2 , sum;
	printf("for the 1st complex \n");
	printf("enter the real and the imag respectively : ");
	scanf("%f %f" , &n1.real , &n1.imag);
	printf("for the 2nd complex \n");
	printf("enter the real and the imag respectively : ");
	scanf("%f %f" , &n2.real ,& n2.imag);
	sum = add(n1,n2);
	printf("sum = %3f + %3f i" , sum.real , sum.imag);

	return 0;
}
struct complex add(struct complex n1 ,struct complex n2)
{
	struct complex t;
	t.real = n1.real+n2.real;
	t.imag = n1.real+n2.imag;
	return (t);
}
