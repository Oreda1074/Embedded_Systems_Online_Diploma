/*
 * EX7.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

/*EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
*/

#include <stdio.h>

int main()
{
	float a=0.0 , b=0.0;

	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
//Swapping the 2 values without using temp variable
	a = a + b;
	b = a - b;
	a = a - b;

	printf("\nAfter swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);

	return 0;
}
