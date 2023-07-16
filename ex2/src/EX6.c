/*
 * EX6.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include<stdio.h>
#include<stdio.lb>

int main (void)
{
    int n, count ,sum=0;
    printf("enter an integer");

    fflush(stdin);fflush(stdout);
    scanf("%d",&n);
    count=1;
    while (count<=n)
    {
        sum=+count;
        ++count;

    }
    printf("sum=&d",sum);
    return(0);

}
