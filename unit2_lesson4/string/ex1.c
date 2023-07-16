/*
 * ex1.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,x=0;
	char a[100],ch;
	printf("Enter the sentence:");
	fflush(stdin);fflush(stdout);
	gets(a);
	printf("Enter the letter to get the frequency:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	for (i=0;a[i]!='\0';i++)
	{
		if(ch==a[i])
			++x;
	}

	printf("the frequency of chacter %c is %d",ch,x);
	return(0);


}
