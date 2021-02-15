#include<stdio.h>

main(){

signed short a = 0xf0f0;
unsigned short b = 0xf0f0;

b = (unsigned)(((unsigned)(b=a)) >> 8);

printf("%x\n",b);

printf("%x\n",2**16);


}