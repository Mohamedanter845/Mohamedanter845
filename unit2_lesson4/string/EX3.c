/*
 * EX3.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Anter
 */


#include<stdio.h>
#include<string.h>
void main()
{
	char arr[100],ch,temp;
	int i,rev;
	printf("enter the string:");
	fflush(stdin);fflush(stdout);
	gets(arr);
	rev= strlen(arr)-1;
	for (i=0 ;i<rev ;i++)
	{
		temp=arr[i];
		arr[i]=arr[rev];
		arr[rev]=temp;
		rev--;
	}
	printf("reverse string is : %s",arr);
}
