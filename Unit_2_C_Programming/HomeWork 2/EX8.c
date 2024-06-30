/*
 * EX8.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

int main()
{
	char op;
	float a=0.0 , b=0.0;

	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &op);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f\n%f", &a , &b);

	switch(op)
	{
	case '+':
	{
		printf("%f + %f = %f",a ,b , a+b);
	}
	break;
	case '-':
	{
		printf("%f - %f = %f",a ,b , a-b);
	}
	break;
	case '*':
	{
		printf("%f * %f = %f",a ,b , a*b);
	}
	break;
	case '/':
	{
		printf("%f / %f = %f",a ,b , a/b);
	}
	break;
	default:
	{
		printf("You entered wrong operator.");
	}
	break;
	}
}
