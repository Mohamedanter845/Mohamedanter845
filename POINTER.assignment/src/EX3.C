/*
 * EX3.C
 *
 *  Created on: Oct 10, 2023
 *      Author: HP
 */


/*
 ============================================================================
 Name        : pointer_ex3.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[50];
	char revstr[50];
	char *stptr =str;
	char *revptr=revstr;
	int x=-1;
	printf("\n\nPointer : Print a string in reverse order :\n");
	printf("\n\n------------------------------------------------\n\n");
	printf("Input a string :");
	fflush(stdin);fflush(stdout);
	scanf("%s",&str);

	while(*stptr){
		stptr++;
		x++;
	}
	while(x>=0){
		stptr--;
		*revptr=*stptr;
		revptr++;
		--x;

	}
	*revptr='\0';
	printf("Reverse of the string is : %s\n\n",revstr);
	return(0);
}
