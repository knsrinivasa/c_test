#include<stdio.h>
#include<conio.h>

void main1() {

int array1[5]={1,2,3,4,5}, array2[5]={11,22,33,44,55}, array3[5]={111,222,333,444,555};
int array4[2][2]={66,77,88,99};
int idx, i, *ptr1, *ptr2, *ptr3, *ptr4[3]; 



	ptr1 = array1;

	ptr2 = &array2[0];

	ptr3 = array3;
	
ptr4[0] = array1;
ptr4[1] = array2;
ptr4[2] = array3;

for(idx=0; idx<5 ; idx++)
	{
	printf("%d\t",*(ptr1+idx));
	}

for(idx=0; idx<5 ; idx++)
	{
	printf("%d\t",*(ptr2+idx));
	}


for(idx=0; idx<5 ; idx++)
	{
	printf("%d\t",*(ptr3++));
	}
printf("\n");

/*
for(idx=0; idx<2 ; idx++)
	{
//	printf("%d\t%d\t",*(ptr4[idx]), *(ptr4[idx+1]) );
	printf("%d\t",*(ptr4[idx]) );
	}
printf("\n");
*/

printf("Array of pointers:\n");

for(idx=0; idx<3; idx++)
{
	for(i=0; i<5; i++)
	{
		printf("%d\t", *ptr4[i] );	
	}
	
printf("%d\t", *ptr4[idx] );
}


}



void main2() {

int array1[5]={1,2,3,4,5}, array2[5]={11,22,33,44,55}, array3[5]={111,222,333,444,555};

int idx, i, *ptr4[3]; 


ptr4[0] = array1;
ptr4[1] = array2;
ptr4[2] = array3;

printf("Array of pointers:\n");
/*
for(idx=0; idx<3; idx++)
{
	for(i=0; i<5; i++)
	{
		printf("%d\t", *(ptr4+i) );	
	}
	
printf("\n%d\t", *ptr4[idx] );
}

*/

	for(i=0; i<3; i++)
	{
		for(idx=0; idx<5; idx++)
		{
			printf("%d\t", *(ptr4[i]+idx) );	
		}

	  printf("\n%d\t\n", *ptr4[i+1] );	
	}

	printf("\n");

}


void main(){

	signed int sint32=0;
	unsigned int uint32=0;

	printf("size of sint32 = %i\nsize of uint32 = %i\n",sizeof(sint32),sizeof(uint32));
	
	printf("sint32\t\tuint32\n-------\t\t-------\n");
	/*for(sint32=0xffffff,uint32=0xffffff ;sint32,uint32; sint32++,uint32++)
	{
	//printf("%i\t\t%i\n",sint32,uint32);
	}*/

	printf("%i\t\t%i\n",sint32-1,uint32-1);

}