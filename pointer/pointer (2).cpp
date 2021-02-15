#include<stdio.h>
#include<conio.h>

void main(){

	int *ptr1, *ptr2, variable=5, variable_array[5]={0,11,22,33,44};

	ptr1 = &variable;
	ptr2 = variable_array;

	printf("\nptr1 = %d\n", *ptr1);

	printf("pointer array values :\n");
	for(int i =0; i<5; i++)
	{
		printf("ptr2[%d] = %d\t",i, *(ptr2+i) );
	}

}