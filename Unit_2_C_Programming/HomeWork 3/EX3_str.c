/*
 * EX3_str.c
 *
 *  Created on: Jul 9, 2024
 *      Author: Omar Reda
 */
#include <stdio.h>
#include <string.h>

#define flush()	fflush(stdin);fflush(stdout)

int main()
{
	char str[100],temp;
	int i,j;

	printf("Enter the string  : ");
	flush();
	gets(str);

	for(i = 0 , j = strlen(str)-1 ; i < j ;i++,j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	printf("\nReverse string is : %s",str);

}
