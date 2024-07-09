/*
 * EX2_str.c
 *
 *  Created on: Jul 9, 2024
 *      Author: Omar Reda
 */
#include <stdio.h>

#define flush()	fflush(stdin);fflush(stdout)

int main()
{
	int i,num=0;
	char str[100];

	printf("Enter a string: ");
	flush();
	gets(str);

	for(i=0;str[i]!=0;i++)
	{
		num++;
	}

	printf("Length of string: %d",num);

}
