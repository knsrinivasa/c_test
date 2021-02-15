
#include<stdio.h>
//#include"aadrs_value.h"
//#include"addrs_func2.h"

#define swap(a,b) (((a>b) && (c=a)) || (c=b) )

int main1(){

	static int a = 1;

	printf("Before Tx in main: a = %d\n",a);
	func1(&a);
	printf("After Rx in main: a= %d\n",a);

return 0;

}

int main(){

	int a=5,b=10,c;
	swap(a,b);
printf("c=%d\n",c);
	return 0;

}