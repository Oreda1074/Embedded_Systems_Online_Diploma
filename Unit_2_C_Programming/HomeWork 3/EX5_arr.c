/*
 * EX5_arr.c
 *
 *  Created on: Jul 9, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

#define flush()	fflush(stdin);fflush(stdout)

int main()
{
	int i,n,element,loc,arr[100];

	printf("Enter no of elements : ");
	flush();
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		flush();
		scanf("%d",&arr[i]);

	}

	for(i=0;i<n;i++)
	{
		printf("%d	",arr[i]);
	}

	printf("\nEnter the elements to be searched : ");
	flush();
	scanf("%d",&element);

	for(i=0;i<n;i++)
	{
		if(element == arr[i])
		{
			loc = i+1;
		}
	}

	printf("Number found at the location = %d",loc);

}
