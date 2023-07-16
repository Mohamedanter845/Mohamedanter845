/*
 * ex7.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include "stdio.h"

void main()
{
	int a,b;
	printf("Enter value of a: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&a);

	printf("Enter value of b: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&b);

	a=a*b;
	b=a/b;
	a=a/b;

	printf("\nAfter swapping, value of a = %d",a);
	printf("\nAfter swapping, value of b = %d",b);

}
