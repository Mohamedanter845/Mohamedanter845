/*
 * arrayex5.c
 *
 *  Created on: Jul 18, 2023
 *      Author: Anter
 */


#include<stdio.h>
int main(){
	int x =0 ;
		int searchnum =0;
		int loc =0 ;
		int arr[x];

		printf("Enter no of elements: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);

		for (int i=0 ; i<x;i++){
				fflush(stdin);fflush(stdout);
				scanf("%d",&arr[i]);

			}
			for (int i=0 ; i<x ;i++){

				printf("%d\t",arr[i]);
			}
				printf("\n");
				printf("Enter the elements to be searched : ");
				fflush(stdin);fflush(stdout);
				scanf("%d",&searchnum);
				for(int i = 0 ; i<x ; i++){
					if(arr[i] == searchnum)
						loc = i+1;
				}
				printf("Number found at the location = %d",loc);


			}






