/*
 * arrayex4.c
 *
 *  Created on: Jul 18, 2023
 *      Author: Anter
 */


#include<stdio.h>
int main(){
	int arr[100],size,i,element,index;
	printf("enter no of elements:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	for(i=0 ; i<size && i<100 ;i++){
		arr[i]=i+1;
		printf("%d",arr[i]);

	}
	printf("\nenter the element to be inserted:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);

	printf("enter the location:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&index);

	if (index < 0 || index > size){
			printf("invalid location");
		}
		else {
			for (int i = size -1 ; i>= index-1 ; i--){// i=4 // i=3 // i= 2
				arr[i+1] = arr[i];
			}
			arr[index-1] = element;
		}
		for (int i=0 ; i<size+1;i++){
			printf("%d\t",arr[i]);
		}


	}
