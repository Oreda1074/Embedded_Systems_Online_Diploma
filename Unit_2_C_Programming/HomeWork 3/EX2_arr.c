/*
 * EX2_arr.c
 *
 *  Created on: Jul 8, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

#define flush()	fflush(stdin);fflush(stdout)

int main()
{
	int i,arr_size=0;
	float sum=0.0,arr[100];

	printf("Enter the numbers of data: ");
	flush();
	scanf("%d",&arr_size);
	while(arr_size > 100 || arr_size <=0)
	{
		printf("Error please enter a number from 1 to 100.\n");
		printf("Enter the number again: ");
		flush();
		scanf("%d",&arr_size);
	}
	for(i=0;i<arr_size;i++)
	{
		printf("%d. Enter number: ",i+1);
		flush();
		scanf("%f",&arr[i]);
		sum = sum + arr[i];
	}

	printf("Average = %.2f",sum/arr_size);

	return 0;
}
