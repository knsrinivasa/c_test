#include<stdio.h>


main(){

		FILE *src_ptr,*dest_ptr;
		char ch;

	src_ptr = fopen("file.c", 'r');
	dest_ptr = fopen("out.txt", 'w');


	fclose(src_ptr);
	fclose(dest_ptr);

}