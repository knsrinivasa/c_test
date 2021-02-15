
void func2(int *c){

	printf("value recieved from func1:\n c = %d\n",c);
	printf("Value when Rx in  func2: %d\n",*c);
	*c = (*c) * 10;
	printf("Value changed in func2: %d\n",*c);
	

}