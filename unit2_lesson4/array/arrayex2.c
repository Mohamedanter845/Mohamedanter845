/*
 * arrayex2.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Anter
 */


#include<stdio.h>
int main()
{
	int i=0,n=0;
	float arr[n] ,sum=0 ,avr=0;
	printf("enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("enter number%d:",i+1);

		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
	}
	for(i=0;i<n;i++){

	sum=sum+arr[i];
	}
	avr=sum/n;
	printf("average=%.2f",avr);
}
