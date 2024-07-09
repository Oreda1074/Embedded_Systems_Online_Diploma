/*
 * EX1_str.c
 *
 *  Created on: Jul 9, 2024
 *      Author: Omar Reda
 */

#include <stdio.h>
#include <string.h>

#define flush()	fflush(stdin);fflush(stdout)

int main()
{
	char ch,str[100];
	int i,num=0;

	printf("Enter a string: ");
	flush();
	gets(str);

	printf("Enter a character to find frequency: ");
	flush();
	scanf("%c",&ch);

	for(i=0;i<strlen(str);i++)
	{
		if(ch == str[i])
		{
			num++;
		}
	}

	printf("Frequency of %c = %d",ch,num);

}
