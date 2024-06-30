/*
 * EX4.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

int main()
{
	float x=0.0;

	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &x);

	if(x > 0)
	{
		printf("%f is positive.",x);
	}
	else if(x < 0)
	{
		printf("%f is negative.",x);
	}
	else
	{
		printf("You entered zero.");
	}
}
