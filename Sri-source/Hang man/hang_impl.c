
#define CHANCES 5				// no of error chances


void user_try(char *name, int choice){

	char input_ch;
	int i;
	int errors=0,occur=0,status=0;

	char *cast;					// for character wise access of name
	char temp[30];				// to hold character array of name
	char disp_arr[30];

	cast = (char *)name;		
	
	for(i=0;i<30;i++)
	{			
		temp[i] = 0;				// clear temp and disp_arr
		disp_arr[i] = 0;
	}
	
	for(i=0;i<strlen(name);i++)
		temp[i] = *(cast++);		// temp = cast

	while(1){
		occur=0;
	
if(errors<5)					
{	
	input_ch = toupper(getch());
	printf("\r");

	for(i=0;i<=strlen(name);i++)
	{							
		if(strcmp(disp_arr,name))			// equal => returns 0
		{
	
			if( temp[i] == input_ch)
			{
				disp_arr[i]=input_ch;
				occur=1;	
			}
		}
		printf(" %c ",disp_arr[i]);

	}	// for //

		if(!occur)
		{
			errors++;
			occur=0;
		}

		printf(" \t%d ",CHANCES-errors);		// chances left
	
 	if(!strcmp(disp_arr,name))
		{
			printf("\n\nYOU WON IN DECODING:\n%s\n\n",name);
			status = 1;
			return 0;
		}
}						// if

else							
	break;						
}						//  while

if(!status)
{ 
 	printf("\nSoryy you lost\n\n");
 	printf("The Word was %s\n\n",name);

	printf("Oops! you are HANGED!!!\n\n");
	printf(" %c\n%c%c%c\n%c %c\n\n",79,47,179,92,47,92);		// hang
	
	return 0;
}

}



void get_name(char *name,int choice){

		int i;
		int a[30];
	
			for(i=0;i<strlen(name);i++)
			{
				a[i] = '-';
				printf(" %c ",a[i]);
			}
			printf("\tChances left for you:-  %d\n",CHANCES);

			printf("\n");

		 user_try(name,choice);				//user input

		return 0;
}




