/*
 ============================================================================
 Name        : ex4.c
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

	struct student arr[10];

	printf("enter the information of student : \n");
	for(int i = 0 ; i < 10 ; i++)
	{
		printf("enter name : ");
		scanf("%s",&arr[i].name);

		printf("enter roll : ");
		scanf("%d",&arr[i].roll);

		printf("enter mark : ");
		scanf("%f",&arr[i].mark);
		printf("\n");
	}


	printf("Displaying the information: \n");
	for(int i = 0 ; i < 10 ; i++)
	{
		printf("name : %s \n" , arr[i].name);
		printf("roll : %d \n", arr[i].roll);
		printf("mark : %f \n", arr[i].mark);
		printf("\n");
	}


	return 0;
}
