
#include<stdio.h>
#include"aadrs_value.h"
#include"addrs_func2.h"


int main(){

	static int a = 1;

	printf("Before Tx in main: a = %d\n",a);
	printf("Addrs of a in main:\n &a = %d\n",&a);
	func1(&a);
	printf("After Rx in main: a= %d\n",a);

return 0;

}
