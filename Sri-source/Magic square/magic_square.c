

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
