/*
 * EX2.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>

int main()
{
	char x;

	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);

	if(x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U')
	{
		printf("%c is a vowel.",x);
	}
	else
	{
		printf("%c is a consonant.",x);
	}
}
