/*
 * EX2.C
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */
/*
 EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################
 */

#include <stdio.h>

#define flush	fflush(stdin);fflush(stdout)

int main()
{
	int x = 0;

	printf("Enter a integer: ");
	flush;
	scanf("%d", &x);
	printf("You entered: %d", x);

	return 0;
}
