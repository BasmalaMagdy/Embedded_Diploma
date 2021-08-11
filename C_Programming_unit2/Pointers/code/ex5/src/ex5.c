/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
	char *name;
	int id;
};

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct Employee emp1 = {"meme" , 1452},emp2 = {"nene" , 1006},emp3 = {"Alex" , 1006};

	struct Employee (*arr[3]) = {&emp1,&emp2,&emp3};
	struct Employee (*(*ptr)[3]) = &arr;

	printf("ExmployeeName : %s\n" , (**(*ptr+2)).name);
	printf("ExmployeeID : %d" , (**(*ptr+2)).id);
	return 0;
}
