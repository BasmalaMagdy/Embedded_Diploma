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

struct dist
{
	int feet;
	float inch;
};

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct dist d1 , d2,sum;

	printf("Enter the info of the 1st distance: \n");
	printf("enter the feet: ");
	scanf("%d",&d1.feet);
	printf("enter the inch: ");
	scanf("%f",&d1.inch);
	printf("Enter the info of the 2nd distance: \n");
	printf("enter the feet: ");
	scanf("%d",&d2.feet);
	printf("enter the inch: ");
	scanf("%f",&d2.inch);

	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch +d2.inch;

	if(sum.inch >= 12)
	{
		sum.inch -= 12;
		sum.feet++;
	}

	printf("sum of the distance = %d\' - %f\"" , sum.feet , sum.inch);

	return 0;
}
