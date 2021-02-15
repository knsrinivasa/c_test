#include<stdio.h>
#include<conio.h>

void main1(){

	int i, *ptr1, *ptr2, variable=5, variable_array[5]={0,11,22,33,44};

	ptr1 = &variable;
	ptr2 = variable_array;

	printf("\nptr1 = %d\n", *ptr1);

	printf("pointer array values :\n");
	for( i =0; i<5; i++)
	{
		printf("ptr2[%d] = %d\t",i, *(ptr2++) );
	}

}

void main(){

	short *array[5]={10,20,30,40,50}, i;

	for (i=0;i<5;i++)
		printf("%d\t", *((&(array[0]))++) );

	printf("\n");


}