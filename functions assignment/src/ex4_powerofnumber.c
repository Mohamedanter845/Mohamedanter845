/*
 * ex4_powerofnumber.c
 *
 *  Created on: Aug 4, 2023
 *      Author: Anter
 */


#include<stdio.h>
void power();
int main(){
	power();
	return 0 ;
}
void power (){
	int i;
	int x;
	printf("Enter base number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &x);
	int y;
	printf("\nEnter power number(positive integer) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&y);

	int z=1;
	for (i=0 ; i <y ; i++)
	{
		z*=x;
	}
	printf("%d ^ %d = %d" , x,y,z);
}
