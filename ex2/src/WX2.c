/*
 * WX2.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include <stdio.h>

void main()
{
	char c;

	printf("Enter an alphabet: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c='O'||c='u'||c=='U')
    printf("%c is a vowel");
    else
    printf("%C is a constant");
}
