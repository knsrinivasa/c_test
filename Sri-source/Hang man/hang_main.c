#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

#include"hang.h"

main(){
 
	int choice;

	printf("\n\tWELCOME TO HANG-MAN\n");
	printf("==================================\n");
	printf("\t\t:-Srinivasa.K.N\n\t\t:ver 1.5\n\n\n");

	printf("BOSCH Categories:\n");
	printf("-----------------\n");
	printf("1. Client\n2. Country\n3. Product\n4. Department\n"); 

	printf("\nEnter your field of interest:\n");
	scanf("%d",&choice);
	
	if(choice<1 || choice>4)
	{
		printf("\n\nEnter a valid choice\n\n");
		main();
	}
	else
	{
//		key_set();					// in disp
		random_index(choice);		// database
	}
	

	while(1){

		printf("Would U like to continue:?\n\n");
	
		if(toupper(getch()) == 'Y')
			{
				printf("Want to change the catagory:?\n\n");
				
				if(toupper(getch()) == 'Y')
				{
					system("cls");
					main();
				}
				else
				{
					system("cls");
					random_index(choice);
				}
			}
		else
			exit(0);
}

return 0;

}