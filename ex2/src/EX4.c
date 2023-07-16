/*
 * EX4.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include "stdio.h"

void main()
{
	float num;

	printf("Enter a number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&num);

	if(num>0)
		printf("%.2f is positive.",num);
	else if(num<0)
		printf("%.2f is negative.",num);
	else
		printf("You entered zero");
}
