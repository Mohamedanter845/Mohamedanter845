/*
 * arrayex1.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Anter
 */

#include <stdio.h>

int main(){
	float arr1[2][2];
	float arr2[2][2];
	float sum[2][2];

	printf("enter the elements of first arr1\n");
	for(int i=0;i<2;i++){
		for(int j=o;j<2;j++){
			printf("enter the element a %d%d :",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}
    printf("enter the elements of second arr2\n");
    for(int i=0;i<2;i++){
    	for(int j=0;j<2;j++){
    		printf("enter the element a%d%d",i+1,j+1);
    		fflush(stdin);fflush(stdout);
    		scanf("%f",&arr2[i][j]);
    	}
    }
