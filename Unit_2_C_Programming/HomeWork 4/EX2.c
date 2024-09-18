/*
 * EX2.c
 *
 *  Created on: Sep 13, 2024
 *      Author: Omar Reda
 */
#include "stdio.h"

int fac(int x);

int main()
{
	int n;
	printf("Enter an positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);


	printf("Factorial of %d = %d",n,fac(n));

	return 0;
}


int fac(int x)
{
	if(x!=1)
		return x*fac(x-1);
}
