#include<stdio.h>

#define case1 1
#define case2 2
void main(){

	const int CASE1=1;
	int idx;

	for ( idx=0; idx<3; idx++)
	{
		switch(idx)
		{
		case case1:  printf("Case = %d\n", idx);
				 break;
		
		case case2:  printf("Case = %d\n", idx);
				 break;
		
		default: printf("Default Case = %d\n", idx);
				 break;
		}
	}

}