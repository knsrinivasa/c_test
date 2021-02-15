
void func1( int * b){

	(*b) = (*b) +1;
	printf("Value in func1: %d\n", *b);
	printf("value recieved from main:\n b = %d\n",b);
	func2(b);

	printf("Value after unwinding of func2:= %d\n",*b);

}