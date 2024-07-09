/*
 * EX3_arr.c
 *
 *  Created on: Jul 8, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

#define flush()	fflush(stdin);fflush(stdout)

int main()
{
	int i,j,rows,cols,arr[50][50],Tr_arr[50][50];

	printf("Enter rows and column of matrix: ");
	flush();
	scanf("%d%d",&rows,&cols);

	while(rows > 50 || rows <= 0 || cols > 50 || cols <= 0)
	{
		printf("Error please enter numbers from 1 to 50.\n");
		printf("Enter rows and column of matrix again: ");
		flush();
		scanf("%d%d",&rows,&cols);
	}

	printf("\nEnter elements of matrix:\n");

	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<cols ; j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			flush();
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\nEntered Matrix:\n");

	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<cols ; j++)
		{
			printf("%d	",arr[i][j]);

		}
		printf("\n\n");
	}

	printf("Transpose of Matrix:\n");

	for(i=0 ; i<cols ; i++)
	{
		for(j=0 ; j<rows ; j++)
		{
			Tr_arr[i][j] = arr[j][i];
		}
	}

	for(i=0 ; i<cols ; i++)
	{
		for(j=0 ; j<rows ; j++)
		{
			printf("%d	",Tr_arr[i][j]);

		}
		printf("\n\n");
	}


}
