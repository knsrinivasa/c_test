#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "math.h"
#include "string.h"
#include "ctype.h"
#include "malloc.h"
#include "time.h"


/*
    For Debugging

    gcc  try.c -ggdb
    gdb a.exe

*/


/********************************************************************************************/


/*

Write a program to implement the Fibonacci series
Sorting and searching algorithms...
aphabetical order and name search

*/

int main1() {

    int var=0.5;

    if( -0.5 <= var <= 0.5 )
        printf("Correctly tested\n");
    else
        printf("InCorrectly tested\n");

return (0);

}

/********************************************************************************************/

main2(){

char *p=0;
char **pp=0;
printf("%d\n",(++p) );
printf("%d\n",(++pp) );

}

/********************************************************************************************/

main3(){

    int a,b;
    int *x=&a, *y=&b;

    printf("%i\n", (int)(x-y));
    printf("%i\n", ((int)x-(int)y));
}

/********************************************************************************************/

main4(){

    int x=10;
    int y=20;
    int *p=&x;
    int **pp=&p;
    *pp=&y;
    printf("%d\t%d\n",*p, **pp);

}


/********************************************************************************************/




func(char *p){
    char arr[6]="World";
//    p=arr;
    *p=arr[4];
//return (arr);
}

main5(){

    char array[6]="Hello", *p=array;
    func(p);
    printf("%s\n",p);

}

/********************************************************************************************/


main6(){

    int a=111, b=222, c;
    (0 && (c=a) ) || (c=b);
    printf("c=%i\n",c);
}


//#define print(n)  (printf("token#n"=%d\n",token##n) )

/********************************************************************************************/

main7(){
//print(9);

}

/********************************************************************************************/

#define NEG(a) -a+1

main8(){

    int x=3;

    printf("%d\n", NEG(NEG(x)));

}


/********************************************************************************************/

/*
#define ONE 1
#define TWO 2
#define ONE TWO
#define TWO ONE

main9(){

printf("ONE=%d\tTWO=%d",ONE,TWO);

}
*/

/********************************************************************************************/

/*
main10(){

    short var=0x2211;
    char *ptr = &var;

    printf("%x",*ptr);
}
*/

/********************************************************************************************/



main11(){

 int a=2,b=10;

// printf("%d",a+++++b);

}

/********************************************************************************************/

main12(){

 struct AA
 {
    int bit:3;
 };

 struct AA a;
 a.bit=0xff;
 printf("%d",a.bit);

}

/********************************************************************************************/

main13(){

    char *str1="SRI", *str2="RAMA";
    int i;

    printf("1)%s\t%s",str1,str2);

    for(i=strlen(str1);i<strlen(str2);i++)
        {
        *(str1+i) = *(str2+i);
        }

        *( str1+strlen(str1)+strlen(str2) ) = '\0' ;


    printf("\n2)%s\t%s",str1,str2);

}


/*******************************************************************************************/
/***************************       MAGIC SQUARE      ***************************************/
/*******************************************************************************************/
/*
void disp(int a[16][16], int num_sqr){

    int i,j;

printf("\n\n");

        for(i=0;i<num_sqr;i++)
        {
            for(j=0;j<num_sqr;j++)
                printf("%d\t",a[i][j]);
            printf("\n\n");
        }

printf("\n\n");
}



void square(int first, int num_sqr){

    int i,j,a[16][16];

    int last = first + (num_sqr*num_sqr)-1;

        for(i=0;i<num_sqr;i++)
        for(j=0;j<num_sqr;j++)
        {
            if (i==0 && j==num_sqr/2)
                a[i][j] = first;
            else
                a[i][j] = 0;
        }

        i=0;
        j=num_sqr/2;

    while(first++ < last){

        i--;
        j++;

            if(j>=num_sqr && i==0)
            {
                j = 0;
                a[i][j] = first;
            }

        else
            if(i<1 && j>=num_sqr)
            {
                if(!a[i+2][j-1])
                {
                    i = i+2;
                    j = j-1;
                    a[i][j] = first;
                }

                else
                {
                    j = 0;
                    a[i][j] = first;
                }

            }

        else
            if(i<0)
            {
                i = num_sqr-1;
                a[i][j] = first;
            }

        else
            if(j>=num_sqr)
            {
                j = 0;
                a[i][j] = first;
            }

        else
        {
            if(!a[i][j])
                a[i][j] = first;

            else
            {
                i = i+2;
                j = j-1;
                a[i][j] = first;
            }
        }
    }

    disp(a,num_sqr);
}


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
*/
/*******************************************************************************************/
/*******************************************************************************************/



main14(){
char *ptr1="Sri", *ptr2="Rama";
printf("&ptr1=%d\n&ptr2=%d\nptr1=%d\nptr2=%d\n*ptr1=%s\n*ptr2=%s\n",&ptr1,&ptr2,ptr1,ptr2,ptr1,ptr2);
printf(( &ptr1>&ptr2)?"%s%s":"%s", ptr1,ptr2);

}



/********************************************************************************************/


main15()
{

    unsigned unsign  =  0 ;
      signed   sign  = -1 ;

    ( unsign > sign ) ? printf("unsign > sign") : printf("sign > unsign") ;

}


/********************************************************************************************/


void change()
{
/* Write something in this function so that the output of printf in main
function should give 5 . Do not change the main function */

}

main16()
{
    int i=5;
    change();
    i=10;
    printf("%d",i);

}

/********************************************************************************************/

main17(){

struct str{
    int a;
    short int b;
    int c;
    }st={11,2,3};

/*    st.a=st.a;
    st.b=2;
    st.c=3;

  */
/*  st=st;
  &st;
  st.a=st.a;
  st.b=st.b;
  st.c = st.c;
       printf("st.c=%d\n",st.c);
*/

printf("st=%d\n&st=%p\nst=%d\nst.a=%d\nst.b=%d\n&st=%d\nst.c=%d\n",st,&st,st,st.a,st.b,&st,st.c);

    printf("st   =  %d\n",st);
    printf("&st  =  %p\n",&st);
    printf("st   =  %d\n",st);
    printf("st.a =  %d\n",st.a);
    printf("st.b =  %d\n",st.b);
    printf("&st  =  %p\n",&st);
    printf("st.c =  %d\n",st.c);


}

/********************************************************************************************/

main18(){


    int a;

    struct st{
        int a;
        int b;
        }st;

        printf("%p\n%p\n",(&a),&st );

}

/********************************************************************************************/


main19(){

    char (*p1)[10] , *p2[10], *(p3[10]);

    printf("p1 = %i\np2 = %i\np3 = %i\n",sizeof(p1),sizeof(p2),sizeof(p3) ) ;

}

/********************************************************************************************/

main20(){

/*
 while()
        {
            printf("While in Endless Loop\n");
        }
*/

   for(;;)    printf("for in Endless Loop\n");

/*   for(;;)

   ;        // Necessary
*/
}


/********************************************************************************************/

int v,i,j,k,l,s,a[99];
int main21(int argc, char* argv[ ])
{
    for(scanf("%d",&s);*a-s;v=a[j*=v]-a[i],k=i<s,
    j+=(v=j<s&&(!k&&!!printf(2+"\n\n%c"-(!l<<!j),
    " #Q"[l^v?(l^j)&1:2])&&++l||a[i]<s&&v&&v-i+j&&v+i-j))
    &&!(l%=s),v||(i==j?a[i+=k]=0:++a[i])>=s*k&&++a[--i])
    ;
}

/********************************************************************************************/


#define M 5;
#define N 10;

main22()
{
int sum = 1;

  sum = sum + M + N;
  printf("sum=%d\n", sum );
}

/********************************************************************************************/


#define NEGVE(a) -a
main23(){

    int x=3;
    printf("%d\n", NEGVE(NEGVE(x)));

}

/********************************************************************************************/


int main24()
{
    char number=-64;
    char numberDiv2;
     numberDiv2 = number >> 1;
     printf("%d",numberDiv2);

}

/********************************************************************************************/

          main25(l
      ,a,n,d)char**a;{
  for(d=atoi(a[1])/10*80-
 atoi(a[2])/5-596;n="@NKA\
 CLCCGZAAQBEAADAFaISADJABBA^\
 SNLGAQABDAXIMBAACTBATAHDBAN\
 ZcEMMCCCCAAhEIJFAEAAABAfHJE\
 TBdFLDAANEfDNBPHdBcBBBEA_AL\
  H E L L O,    W O R L D! "
   [l++-3];)for(;n-->64;)
      putchar(!d+++33^
           l&1);}

/********************************************************************************************/


main26(){

    int i1=5;
    register int i2=22;
    register int i3=33;
    struct st{
        int a;
        int b;
        int c;
        }st={1,2,3};

    for(i1=0;i1<10;)
        printf("%d\n",i1++);
    i2+=3;
    i3+=2;
    printf("%d\t%d\n",i2,i3);
    printf("Give an enter\n");
    getch();
}


/********************************************************************************************/


int factorial(int num){

    if ( (num == 0) || (num == 1) )
    {
        return (1);
    }
    else if(num<0)
            {
                printf("Enter a positive number\n");
                exit(0);
            }
    else
    {
        num*=factorial(num-1) ;

    }
printf("num=%d\n",num);
return (num);
}

main27(){

    int number,soln;
    printf("Enter a positive number for factorial\n");
    scanf("%d",&number);
    soln = factorial(number);
    printf("Factorial of %d = %d",number, soln);
}



/********************************************************************************************/

main28()
    {
       char i=0;
       int (*x)[10], *y[10];
       for(;i>=0;i++) ;
       printf("%d\n",i);
       printf("Size of (*x)[10]=%d\nSize of *y[10]=%d\n",sizeof(x),sizeof(y) );
    }

/********************************************************************************************/


main29(){

  int a=2;
  int b=9;
  int c=1;
   while(b)
    {
       if( ( (b%2)==1 ) )
          c=c*a;
          a=a*a;
          b=b/2;
    }
  printf("%d\n",c);
  }

/********************************************************************************************/


#define STYLE1 char
main30()
     {
      typedef char STYLE2;
     STYLE1 x;
     STYLE2 y;
     x=255;
     y=254;
     printf("%d %d\n",x,y);
     }

/********************************************************************************************/

main31(){

char *pDestn,*pSource="I Love You Daddy";
pDestn=(char *)malloc(strlen(pSource));
strcpy(pDestn,pSource);
printf("%s\n",pDestn);
free(pDestn);

}

/********************************************************************************************/


/*
main32(){

    char a[5][5],flag=0;
    a[0][0]='A';
    flag=((a==*a)&&(*a==a[0]));

    printf("a    =  %d\n",a);
    printf("*a   =  %d\n",*a);
    printf("a[0] =  %d\n",a[0]);

    printf("flag=%d\n",flag);

}
*/

/********************************************************************************************/

main33(){

    char a =0xAA ;
    int b ;
    b = (int) a ;
    printf("Before = %x\n",b);
    b = b >> 4 ;
    printf("After  = %x",b);

}

/********************************************************************************************/


main34(){
int d=5;
printf("%f",d);
}

/********************************************************************************************/

main35()
{
int i;
for(i=1;i<4;i++){
    switch(i){
        case 1:printf("%d",i);break;
        case 2:printf("%d",i);break;
        case 3:printf("%d",i);break;
        }

    switch(i) case 4:printf("%d",i);
}
    printf("\ni=%d\n",i);
}

/********************************************************************************************/


main36()
{
char *s="\12345s\n";
printf("sizeof s = %d\n",sizeof(s));
printf("strlen s = %d",strlen(s));
}

/********************************************************************************************/


main37()
{
unsigned i=1;   /* unsigned char k= -1 => k=255; */
signed j=-1;    /* char k= -1 => k=65535 */
/* unsigned or signed int k= -1 =>k=65535 */
if(i<j)
printf("less");
else
if(i>j)
printf("greater");
else
if(i==j)
printf("equal");
}


/********************************************************************************************/


int f();
main38()
{
f(1);
f(1,2);
f(1,2,3);
}
f(int i,int j,int k)
{
printf("%d\t%d\t%d\n",i,j,k);
}


/********************************************************************************************/

main39()
{

int i=7;
printf("%d\n",(++i)*(++i) );
printf("%d\n",(i++)*(i++) );
printf("%d\n",(++i)*(i++) );
printf("%d\n",(i++)*(++i) );

}

/********************************************************************************************/

main40(){

static i=3;

printf("%d\t",i--);

(i>0) ? main():printf("\n");

printf("%d\t",++i);

}


/********************************************************************************************/


main41(){

char *s[]={ "dharma","hewlett-packard","siemens","ibm"};
char **p;
p=s;
printf("%s\n",++*p );
printf("%s\n",*p++ );
printf("%s\n",++*p );
}



/********************************************************************************************/


main42(){

int a=0,b,c;
    b=((a=0))?2:3;
    printf("%d\n",b);
    if(b=0)
        printf("b=1\n");
    else
        printf("b=0\n");
printf("c=%d\n",(c=0) );
}


/********************************************************************************************/

main43(){

    int a=2,c;

switch(a){
    case 2: c=3;
    case 3: c=4;
    case 4: c=5;
    case 5: c=6;
    default: c=0;
    }

printf("c=%d\n",c);

}

/********************************************************************************************/



main44(){
int *b;
*b=3;
printf("*b=%d\n",*b);

}


/********************************************************************************************/


main45(){

int i=0;
for(i=0;i<20;i++)
{
switch(i){
case 0:i+=5;
case 1:i+=2;
case 5:i+=5;
default: i+=4;
break;}
printf("%d,",i);
}
}


/********************************************************************************************/


main46()
{
int i;
char a[]="String";
char *p="New Sring";
char *Temp;
Temp=a;
//a=malloc(strlen(p) + 1);
strcpy(a,p); //Line number:9//
p = malloc(strlen(Temp) + 1);
strcpy(p,Temp);
printf("%s\n%s",a,p);
free(p);
free(a);

}

/********************************************************************************************/



main47(){

unsigned int x=-1;
int y;
y = ~0;
printf("%u\t%u\n",x,y);
if(x == y)
printf("same");
else
printf("not same");

}


/********************************************************************************************/


char *gxxx()
{static char xxx[1024];
printf("Base addr of array = %p\n",xxx);
return xxx;
}

main48()
{char *g="string";
strcpy(gxxx(),g);
printf("1. %s\n", gxxx());
g = gxxx();
strcpy(g,"oldstring");
printf("The string is : %s",gxxx());
}

/********************************************************************************************/


/*

int global1 = 11;                      /* Data Segment, Value retained at that address even after return *
static int global2 = 22;               /* Data Segment, Value retained at that address even after return *
main49(){

static int stat = 33;                  /* Data Segment, Value retained at that address even after return *

char arr[]={'S','R','I','N','I','V','A','S','A'}, *local_ptr=arr;    /* Stack, Value cleared at that address after return              *
char *str_ptr = "Hello World";                                       /* Data Segment, Value retained at that address even after return *



printf("global1 \t 0x%p \t %d\n",&global1,global1);
printf("static global2 \t 0x%p \t %d\n",&global2,global2);

printf("static local \t 0x%p \t %d\n",&stat,stat);

printf("ch \t\t 0x%p \t %c\n",&ch,ch);

printf("local \t\t 0x%p \t %d\n",&local,local);
printf("*ptr \t\t 0x%p \t %d\n",ptr,*ptr);

printf("str_ptr \t 0x%p \t %s\n",str_ptr,str_ptr);

}

*/

/********************************************************************************************/

main50(){

    struct sample1
        {
            unsigned char  m1 __attribute__((__packed__));
            unsigned short m2 __attribute__((__packed__));
            unsigned long  m3 __attribute__((__packed__));
        };


    struct sample2
        {
            unsigned char  m1;
            unsigned short m2;
            unsigned long  m3;
        } __attribute__((__packed__));


    struct sample3
        {
            unsigned char  m1;
            unsigned short m2;
            unsigned long  m3;
        } ;

    struct sample4
        {
            unsigned char  m1;
            unsigned long  m3;
            unsigned short m2;
        } ;


printf("sizeof sample1 is %d\n",sizeof(struct sample1) );
printf("sizeof sample2 is %d\n",sizeof(struct sample2) );
printf("sizeof sample3 is %d\n",sizeof(struct sample3) );
printf("sizeof sample4 is %d\n",sizeof(struct sample4) );

}

/********************************************************************************************/


int var_x=10;
#define DEF 3
//#include"2.c"
//var_x=20;
#ifdef DEF
#undef DEF
#define DEF 5
#endif

main51(){

    printf("%d\n",var_x);
}


/********************************************************************************************/


main52(){

    struct st{
        int a;
        int b;
        int c;
    }st = {11,22,33};

    printf("st   =  %d\n",st);
    printf("&st  =  %p\n",&st);

    printf("st   =  %d\n",st);
    printf("st.a =  %d\n",st.a);

    printf("st   =  %d\n",st);
    printf("st.b =  %d\n",st.b);

    printf("&st  =  %d\n",&st);

    printf("st   =  %d\n",st);
    printf("st.c =  %d\n",st.c);

}


/********************************************************************************************/

main53(){

    int a=5,b=10;
    printf("a = %d\tb = %d\n",a,b);
    a^=b^=a^=b;
    printf("a = %d\tb = %d\n",a,b);
}

/********************************************************************************************/

/*
main54(){

    const int a=1;
    const int *p=&a;
    int b=10,c=20;
    printf("a  = %d\n", a);
    printf("*p = %d\n", *p);

    a=2;
    printf("\n");
    printf("a  = %d\n", a);
    printf("*p = %d\n", *p);

    *p=3;
    printf("\n");
    printf("a  = %d\n", a);
    printf("*p = %d\n", *p);

    a=b+c;
    printf("\n");
    printf("a  = %d\n", a);
    printf("*p = %d\n", *p);

    p=&b;
    printf("\n");
    printf("a  = %d\n", a);
    printf("*p = %d\n", *p);

}
*/


/********************************************************************************************/


main55(){

/*    short a=32767;
    long b;
    b = a<<16 ;
    printf("%d\n",b);
*/

    char a=-1;
    printf("%d\n", a<<7);
    printf("%d",a);

}

/********************************************************************************************/


func_arr(int *arr[5]){

    int i;
    for(i=0;i<5;i++)
        printf("%d\t",*(arr[i]) );
    printf("\n");
}


main56(){

    int a=11,b=22,c=33,d=434,e=55;
    int *a1=&a,*b1=&b,*c1=&c,*d1=&d,*e1=&e;
    int *arr[5] = {a1, b1, c1, d1, e1};
    printf("&a=%i\ta1=%i\t*a1=%i\t&a1=%i\n",&a,a1,*a1, &a1);
    printf("arr=%i\t&arr=%i\tarr[0]=%i\t&arr[0]=%i\n",arr,&arr,arr[0],&arr[0] );
    func_arr(arr);

}


/********************************************************************************************/


main58()
{
    int a;
    for(a=0;a<=255;a++)
    printf("a=%d\t~a=%d\n", a, ~a);
}

/********************************************************************************************/

main59(){

    unsigned char i;
    signed char a;

    for(i=0;i<255;i++)
      {
        a = (signed char) i;
        printf("i=%d\ta=%d\n",i,a);
      }
}

/********************************************************************************************/

main60(){


    unsigned char  a = 255;
    signed int     b;
    unsigned int   c;
    signed short   d;

printf("\na = %i\t\t(signed)a = %i\n\n",a,(signed char)a);

    b = (signed int)a ;
    printf("b = (signed int)   a   =>  b=%i,  a=%i\n",b,a);

    c = (unsigned int)b ;
    printf("c = (unsigned int) b   =>  c=%i,  b=%i\n",c,b);

    b = (signed int)c ;
    printf("b = (signed int)   c   =>  b=%i,  c=%i\n",b,c);

    d =  (signed short)b ;
    printf("d = (signed short) b   =>  d=%i,  b=%i\n",d,b);


}


/********************************************************************************************/


main61(){

    int a=0, i=5,j=5, arr[i][j];

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(j==3)
            {
             arr[i][j]= ++a ;
             break;
            }
        }
      if(i==4)
      break;
    }

printf("j=%d\ti=%d\n",j,i) ;


/*
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(1)
            {
                printf("\t%d",arr[i][j]) ;
                break;
            }
        }
      if(1)
      {
         printf("\n");
         break;
      }
    }
*/

}



/****************************************************************************************/



void usleep(unsigned long u)
{
    clock_t end, start = clock();
    if (start == (clock_t) -1) return;
    end = start + CLOCKS_PER_SEC * (u / 1000000.0);
    while (clock() != end) ;
}

int main62(void)
{
int i;
    for (i = 0; i < 20; i++)
    {
        usleep(500000);
/*        puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n \n\n\n");
        puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n \n\n\n");
        printf("%*s\n", 10 + i * 2, " __@ ");
        printf("%*s\n", 10 + i * 2, " _`\\<,_");
        printf("%*s\n", 10 + i * 2, "(*)/ (*) ");
*/
    }
return 0;
}


/***************************************************************************************/

#define  MSB_POS 8

main63(){

    int c , a=30 , b=03;
    int z , x=32 , y=5;

    c = ( ( a *100 ) + b ) ;
    printf("a=%d\nb=%d\nc=%d\n",a,b,c );

    z= x>>4 & 1 ;
    printf("x=%d\ny=%d\nz=%d\n",x,y,z );

}


/*****************************************************************************************/

main64(){

short int a=-38;
unsigned short  int b;

b=a;

printf("%x\n",b);

}

/*****************************************************************************************/


main65(){

char a=0;
char b=0x07;
a=0x07&0x07;
printf("%d\n",a);

}


/*****************************************************************************************/

main66(){

int a,b=1;

(a=b)?printf("True"):printf("False");

if(fprintf(stderr,"\nHello"))
printf("\nHello True");

}

/*****************************************************************************************/



main(){

struct s{

 signed int    a1;
 unsigned short int  a2;
 signed int          a3;
 short signed int    a4;
};
struct s str1={0,0,0,0};
struct s str2={0xAAAAAAAA,0xBBBB,0xCCCCCCCC,0xDDDDDDDD};
str1=str2;

int a;
printf("%i\n",sizeof(str1) );
for(a=0;a<4;a++)
    {
//        *(&(s1.a1)+a) = a;
        printf("%x\n",*(&(str1.a1)+a) ) ;
    }
}



