/*
 * EX1.C
 *
 *  Created on: Oct 10, 2023
 *      Author: HP
 */


/*
 ============================================================================
 Name        : pointerex1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int m=29;
	int* ab;
	printf("Address of m: %p\n",&m);
	printf("Value of m:%d\n\n",m);
	ab=&m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of ab:%p\n",ab);
	printf("Content of ab:%d\n\n",*ab);
	m=34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab:%p\n",ab);
	printf("Content of ab:%d\n\n",*ab);
	*ab=7;

	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m:%p\n",&m);
	printf("Value of m:%d\n",m);
	return(0);




}
