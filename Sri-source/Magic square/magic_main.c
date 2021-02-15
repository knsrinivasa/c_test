#include<stdio.h>
#include<conio.h>
#include"magic.h"

int test_func(void);

int main(){

int first, num_sqr;

printf("Enter the first number:\n");


scanf("%d",&first);

printf("Enter the number of rows/coloumns:\n");
scanf("%d",&num_sqr);

	if(num_sqr%2 == 0)
	{
		printf("Invalid number, enter an odd number:\n");
		main();
	}

	else
		square(first,num_sqr);

 return 0;

}

