#define MAX 5

char* select_name(int choice, int random)
{

	char *clients[MAX] = {"HONDA","TOYOTA","NISSAN","VOLVO","MITSUBISHI"};
	char *country[MAX] = {"INDIA","GERMANY","AMERICA","JAPAN","ITALY"};
	char *product[MAX] = {"SENSORS","ECU","HEATER","TESTERS","BLAUPUNKT"};
	char *department[MAX] =	{"DIESEL","GASOLINE","TRANSLATION","MULTIMEDIA","EMERGING"};
	
	
	switch(choice){
		
	case 1:
		printf("\nCatagory:-  CLIENTS\n\n");
		return clients[random];
		break;

	case 2:
		printf("\nCatagory:-  COUNTRY\n\n");
		return country[random];
		break;

	case 3:
		printf("\nCatagory:-  PRODUCT\n\n");
		return product[random];
		break;

	case 4:
		printf("\nCatagory:-  DEPARTMENT\n\n");
		return department[random];
		break;

	default:
			printf("Enter a valid choice please:\n");
			return 1;
			break;
	}

}




void random_index(int choice)
{	
	int random;
	char *name;
	char next_chance;



	do
	{	
		random=rand();
	
	}while(!(random<MAX && random>=0));
	

	name = select_name(choice, random);		// select a random name 
				 
	get_name(name,choice);							// link to impl

	return 0;

}

