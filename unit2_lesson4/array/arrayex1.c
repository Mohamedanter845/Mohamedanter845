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

	printf("enter the elements of first arr  :\n");
	for (int i=0; i<2;i++)
	{
		for(int j=0 ; j<2 ; j++){
					printf("Enter the element a%d%d:",i+1,j+1);
					fflush(stdin);
					fflush(stdout);
					scanf("%f",&arr1[i][j]);
				}
			}
			printf("Enter the elements of 2nd arr:\n");
			for (int i = 0 ; i<2 ;i++){
				for(int j=0 ; j<2 ; j++){
					printf("Enter the element a %d%d:",i+1,j+1);
					fflush(stdin);
					fflush(stdout);
					scanf("%f",&arr2[i][j]);
				}
			}
			for (int i = 0 ; i<2 ;i++){
				for(int j=0 ; j<2 ; j++){
					sum[i][j]= arr1[i][j] + arr2[i][j] ;
				}
			}
			printf("Sum Of Matrix :\n");
			for (int i = 0 ; i<2 ;i++){
				for(int j=0 ; j<2 ; j++){
					printf("%0.1f\t", sum[i][j]);

				}
				printf("\n");
			}

		}
