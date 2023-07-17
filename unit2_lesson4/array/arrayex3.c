/*
 * arrayex3.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Anter
 */


/*
 * arrayex3.c
 *
 *  Created on: Jul 17, 2023
 *      Author: Anter
 */

#include<stdio.h>

int main(){
	int max_i=0;
	int max_j=0;
	printf("enter rows and columns of matrix:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&max_i,&max_j);
	int arr[max_i][max_j];
	for(int i=0;i<max_i;i++){
		for(int j=0 ;j<max_j;j++){

			printf("enter the element a%d %d",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i][j]);


		}
	}
	printf("entered matrix is :/n");
	for(int i=0;i<max_i;i++){
		for(int j=0;j<max_j;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	int arr2[max_j][max_i];
	for(int i=0;i<max_j;i++){
		for(int j=0;j<max_i;j++){
			arr2[i][j]=arr[j][i];
		}
	}
	printf("the transpose matrix is :\n");
	for(int i=0;i<max_j;i++){
		for(int j=0;j<max_i;j++){
			printf("%d\t", arr2[i][j]);
		}
		printf("\n\n");

	}
}
