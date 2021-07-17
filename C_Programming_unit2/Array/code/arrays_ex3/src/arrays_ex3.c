/*
 ============================================================================
 Name        : arrays_ex3.c
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
	int n ,m, i, j;
	int a[100][100];
	printf("Enter rows and column of matrix: ");
	scanf("%d%d",&n,&m);
	printf("Enter elements of  matrix");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			printf("\nEnter element a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEntered matrix\n");
	for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				printf(" %d ",a[i][j]);
			}
			printf("\n");
		}
	printf("\nTranspose matrix\n");
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
			{
				printf(" %d ",a[j][i]);
			}
			printf("\n");
		}
	return 0;
}
