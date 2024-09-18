/*
 * EX1.c
 *
 *  Created on: Sep 12, 2024
 *      Author: Omar Reda
 */
#include <stdio.h>

int prime_check(int num);

int main()
{
	int x1,x2,i,flag;

	printf("Enter two numbers(intervals): ");
	fflush(stdout);
	scanf("%d\n%d",&x1,&x2);

	printf("Prime numbers between %d and %d are: ",x1,x2);

	for(i=x1+1;i<x2;++i)
	{
		flag = prime_check(i);
		if(flag == 0)
			printf("%d ",i);
	}
	return 0;
}

int prime_check(int num)
{
	int i,flag=0;
	for(i=2;i<=num/2;++i)
	{
		if(num%i == 0)
		{
			flag = 1;
			break;
		}

	}

	return flag;
}
