/*
 ============================================================================
 Name        : 6.c
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
	float a , b ;
//	int *ptra = &a;
//	int *ptrb = &b;
	float temp;
	printf("Enter value of a: ");
	scanf("%f",&a);
	printf("Enter value of b: ");
	scanf("%f",&b);

//	 1st way
	 temp = a;
	 a = b;
	  b = temp;


	/*2st way
	 * a = a ^ b;
	b = a ^ b;
	a = a ^ b;*/

	/*temp = *ptra;
	*ptra = *ptrb;
	*ptra = temp;*/


	printf("Enter value of a: %f\n" , a);
	printf("Enter value of b: %f\n" , b);
	return 0;
}
