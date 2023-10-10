/*
 * EX4.C
 *
 *  Created on: Oct 10, 2023
 *      Author: HP
 */


/*
 ============================================================================
 Name        : pointer_ex4.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n ,i ,arr[15];
	int *ptr;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	ptr=&arr[0];
	printf("Input %d number of elements in the array :\n",n);

	for(i=0;i<n;i++){
		printf("element - %d :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&arr[n-1];
	printf("\nThe elements of array in reverse order are :\n");
	for(i=n;i>0;i--){
		printf("\n element - %d : %d",i,*ptr);
		ptr--;

	}
	return(0);

}
