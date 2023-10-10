/*
 * EX5.C
 *
 *  Created on: Oct 10, 2023
 *      Author: HP
 */


/*
 ============================================================================
 Name        : pointer_ex5.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct employee
{
	char s[100];
	int id;
}*arr[2],*(*p)[2];
int main(void) {
	struct employee emp1={"Alex",1002},emp2={"man",2334};
	arr[0]=&emp1,arr[1]=&emp2;
	p=&arr;
	printf("Exmployee Name :%s\n",(**(*p)).s);
		printf("Employee ID : %d",(**(*p)).id);


}
