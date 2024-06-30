/*
 * EX6.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

int main()
{
	int i=0 , n=0 , sum = 0;

	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);

	for(i=1 ; i <= n ; i++)
	{
		sum += i;
	}

	printf("Sum = %d",sum);

	return 0;
}
