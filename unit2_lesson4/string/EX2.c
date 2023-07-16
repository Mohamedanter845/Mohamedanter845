/*
 * EX2.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Anter
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char a[100];
	printf("Enter the sentence:");
	fflush(stdin);fflush(stdout);
	gets(a);
	printf("the lenght of  %s is %d",a,strlen(a));
	return(0);

}
