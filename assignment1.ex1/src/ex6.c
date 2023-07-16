/*
 * ex6.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */

#include <stdio.h>
#include <stdio.lb>
int main(void)

{
    float a,b,c;
    printf("enter a value of  a:\n");
    fflush(stdin);fflush(stdout);
    scanf("%f",&a);
    printf("enter a valua of b :\n");
    fflush(stdin);fflush(stdout);
    scanf("%f",b);
    c =a;
    a =b;
    b =c;
    printf("\nAfter swapping, value of a = %f",a);
	printf("\nAfter swapping, value of b = %f",b);
}
