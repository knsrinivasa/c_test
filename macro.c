
#include<stdio.h>
/*
#define	SETBIT(word,pos)     ((word) |= (1<<(pos)))
#define	CLRBIT(word,pos)     ((word) &= ~(1<<(pos)))
#define	PUTBIT(word,pos,val) ((val) ? SETBIT(word,pos) : CLRBIT(word,pos))
#define	SetBit8(ptr,pos,val)  PUTBIT(*((uint8 *)ptr),pos,val)

*/


main(){

	short int a= 0x00fd;

	printf("1 = %x\n",a);

//SetBit8(&a,1,1);

printf("2 = %x\n",a);


}