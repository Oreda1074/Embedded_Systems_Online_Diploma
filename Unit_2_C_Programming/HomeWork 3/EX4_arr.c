/*
 * EX4_arr.c
 *
 *  Created on: Jul 9, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

#define flush()	fflush(stdin);fflush(stdout)

int main()
{
	int n,i,new,loc,arr[100];

	printf("Enter no of elements : ");
	flush();
	scanf("%d",&n);
	printf("\n");

	for(i=0;i<n;i++)
	{
		flush();
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n\nEnter the element to be inserted : ");
	flush();
	scanf("%d",&new);
	printf("\n\nEnter the location : ");
	flush();
	scanf("%d",&loc);

	for(i=n;i>=loc;i--)
	{
		arr[i] = arr[i-1];
	}

	arr[loc-1] = new;

	for(i=0;i<n+1;i++)
	{
		printf("%d ",arr[i]);
	}

}
