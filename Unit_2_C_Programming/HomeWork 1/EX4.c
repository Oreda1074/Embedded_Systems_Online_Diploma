/*
 * EX4.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */
/*EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
############################*/

#include <stdio.h>

int main()
{
	float x=0.0 , y=0.0;

	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f\n%f",&x,&y);
	printf("Product: %f", x * y);

	return 0;
}
