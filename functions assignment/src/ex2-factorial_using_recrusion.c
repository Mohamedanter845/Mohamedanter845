/*
*
 * EX2_factorial.c
 *
 *  Created on: Aug 3, 2023
 *      Author: Anter
 */


#include<stdio.h>
int factorial(int x);
int main(){
	int n;
	printf("enter  a positive number :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	printf("factorial of %d is %d",n,factorial(n));
}
int factorial(int x){
	static int fact=1;
	if(x>1)
	{
		fact*=x;
		x--;
		factorial(x);
	}
	return fact;
}

