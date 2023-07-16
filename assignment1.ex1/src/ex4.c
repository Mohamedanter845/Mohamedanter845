/*
 * ex4.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include <stdio.h>

void main()
{
	float x, y,result;
	printf("Enter two numbers to add: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d %d", &x, &y);
    result=x*y;
	printf("Sum is : %d", result);
}
