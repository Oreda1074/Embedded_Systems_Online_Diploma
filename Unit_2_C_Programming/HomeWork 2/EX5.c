/*
 * EX5.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

int main()
{
	char x;

	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &x);

	if((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
	{
		printf("%c is an alphabet",x);
	}
	else
	{
		printf("%c is not an alphabet",x);
	}
}
