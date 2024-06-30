/*
 * EX3.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */
/*EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################*/
#include <stdio.h>

int main()
{
	int x=0 , y=0;

	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d\n%d",&x,&y);
	printf("Sum: %d", x+y);

	return 0;
}
