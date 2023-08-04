/*
 * EX1_primenumbers.c

 *
 *  Created on: Aug 3, 2023
 *      Author: Anter
 */

#include<stdio.h>

int check_prime(int num);

    int  main()
    {

	int num1,num2,i,flag;
	printf("enter tow numbers(intervals) :");
	fflush(stdin);fflush(stdout);
	scanf("%d %d ",&num1,&num2);
	printf("prime numbers between %d and %d are \n",num1,num2);
	for(i=num1+1 ;i<num2 ;i++)
	{
		flag= check_prime(i);
		if(flag==0)
			printf("%d",i);

	}
	return;


}
int check_prime(int num)
{
	int j,flag=0;
	for(j=2;j<num/2;++j){
		if(num%j==0){
			flag=1;
			break;
		}
	}
	return flag;
}

