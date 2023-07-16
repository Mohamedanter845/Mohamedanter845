/*
 * ex5.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include "stdio.h"

void main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
}
