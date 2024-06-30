/*
 * EX3.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

int main()
{
	float x=0.0 , y=0.0 , z=0.0;

	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f\n%f\n%f", &x , &y , &z);

	if(x > y)
	{
		if(x > z)
		{
			printf("Largest number = %f",x);
		}
		else
		{
			printf("Largest number = %f",z);
		}
	}
	else if(y > z)
	{
		printf("Largest number = %f",y);
	}
	else
	{
		printf("Largest number = %f",z);
	}
}
