/*
 * EX1.C
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include <stdio.h>

void main()
{
	int num;
	printf("Enter an integer : ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is even.",num);
	else
		printf("%d is odd.",num);
}
