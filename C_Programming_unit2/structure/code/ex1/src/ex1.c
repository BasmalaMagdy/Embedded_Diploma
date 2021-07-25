/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[50];
	int roll;
	float mark;
};

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct student o;
	printf("enter the information of student : \n");
	printf("enter name : ");
	scanf("%s",&o.name);

	printf("enter roll : ");
	scanf("%d",&o.roll);

	printf("enter mark : ");
	scanf("%f",&o.mark);

	printf("Displaying the information: \n");
	printf("name : %s \n" , o.name);
	printf("roll : %d \n", o.roll);
	printf("mark : %f \n", o.mark);

	return 0;
}
