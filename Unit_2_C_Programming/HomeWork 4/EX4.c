/*
 * EX4.c
 *
 *  Created on: Sep 13, 2024
 *      Author: Omar Reda
 */
#include "stdio.h"

int pow(int base,int power);

int main()
{
	int x,power;

	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power);
	printf("%d^%d = %d",x,power,pow(x,power));

	return 0;
}


int pow(int base,int power)
{
	if(power!=0)
		return (base*pow(base,power-1));
	else
		return 1;
}
