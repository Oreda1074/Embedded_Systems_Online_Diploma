/*
 * EX1.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

int main()
{
	int x=0;

	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	if(x % 2 == 0)
	{
		printf("%d is even.",x);
	}
	else
	{
		printf("%d is odd.",x);
	}
}
