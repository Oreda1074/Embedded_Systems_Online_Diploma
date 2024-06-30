/*
 * EX7.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

int main()
{
	int i=0 , n=0 , factorial = 1;

	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);
	if(n > 0)
	{
		for(i=1 ; i <= n ; i++)
		{
			factorial *= i;
		}

		printf("Factorial = %d",factorial);

	}
	else
	{
		if(n < 0)
		{
			printf("Error!!! Factorial of negative number doesn't exist.");
		}
		else
		{
			printf("Factorial = 1");
		}
	}


	return 0;
}
