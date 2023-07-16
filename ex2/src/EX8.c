/*
 * EX8.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include <stdio.h>

void main()
{
	char o;
	float num1, num2, answer;


	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&o);

	printf("Enter two operands: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f", &num1, &num2);

	switch(o)
	{
	case '+':
		printf("%f +%f=%f",num1,num2,num1+num2);
		break;
	case '-':
		printf("%f -%f=%f",num1,num2,num1-num2);

		break;
	case '*':
		printf("%f *%f=%f",num1,num2,num1*num2);

		break;
	case '/':
	    printf("%f /%f=%f",num1,num2,num1/num2);

		break;
	default:
		printf("error");

		break;
	}

}
