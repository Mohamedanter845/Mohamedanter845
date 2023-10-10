/*
 * EX2.C
 *
 *  Created on: Oct 10, 2023
 *      Author: HP
 */


/*
 ============================================================================
 Name        : pointerexe2.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	char alph[27];
	char *ptr;
	ptr=alph;

	for(i=0;i<26;i++){
		*ptr=i+'A';
		ptr++;
	}
	ptr=alph;
	printf("The Alphabets are: \n ");
	for(i=0;i<26;i++){
		printf("%c",*ptr);
		ptr++;
	}
	printf("\n\n");
	return(0);
}
