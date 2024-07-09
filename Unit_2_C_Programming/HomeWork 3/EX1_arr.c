/*
 * EX1_arr.c
 *
 *  Created on: Jul 8, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

#define flush()	fflush(stdin);fflush(stdout)

int main()
{
	float a[2][2],b[2][2];
	int i,j;

	printf("Enter the elements of 1st matrix\n");

	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			flush();
			scanf("%f",&a[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");

	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			flush();
			scanf("%f",&b[i][j]);
		}
	}

	printf("Sum Of Matrix:\n%f\t%f\n%f\t%f",a[0][0]+b[0][0],a[0][1]+b[0][1],a[1][0]+b[1][0],a[1][1]+b[1][1]);


	return 0;
}
