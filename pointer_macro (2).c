
#include<stdio.h>

#define CLRBIT(a,bp) a = ( a & ~(1 << bp ) )

main(){
	signed short x=32768;
	int a=0xff, *p=&a, bp=3;
	printf("\nBefore clearing \n%x\n",a);
//	CLRBIT(a,bp);
	CLRBIT(*p,bp);		
	printf("\nAfter clearing  \n%x\n",a);
	printf("\n%i\n",x);
}