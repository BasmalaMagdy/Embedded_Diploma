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

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

    int arr1[15] ,x;
    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d",&x);
    int *ptr;
    ptr = &arr1[0];
    printf("Input 5 number of elements in the array : \n");
    for(int i = 1; i <= x ; i++)
    {
    	printf("element - %d : ",i);
    	scanf("%d" , ptr);
        ptr++;
    }
    ptr--;
    printf("Expected Output \n");
    printf("The elements of array in reverse order are : \n");
    for(int i = x ; i > 0 ; i--)
    {
    	printf("element - %d : %d",i , *ptr);
    	ptr--;
    	printf("\n");
    }
	return 0;
}
