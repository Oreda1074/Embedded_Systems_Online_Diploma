/*
 * EX6.c
 *
 *  Created on: Jun 29, 2024
 *      Author: Omar Reda
 */

/*EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################*/

#include <stdio.h>

int main()
{
	float a=0.0 , b=0.0 , temp=0.0;

	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
//Swapping the 2 values using temp variable
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);

	return 0;
}
