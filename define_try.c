
int cc,aa,bb;


#define SRI(num1) cc=5
#undef SRI
#define SRI(num2)  enum num2 {aa,bb}
main(){

	int num1;

	SRI(num1);
	SRI(num2);

printf("aa=%d\tbb=%d\tcc=%d\n",aa,bb,cc);

}