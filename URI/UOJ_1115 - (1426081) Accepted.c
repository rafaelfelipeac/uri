#include <stdio.h>
#include <stdlib.h>

main()
{
	int x=0, y=0;
	
	do
	{
		scanf("%i %i", &x, &y);
		
		if(x!=0 && y!=0)
		{
			if(x>0 && y>0)
				printf("primeiro\n");
			if(x>0 && y<0)
				printf("quarto\n");
			if(x<0 && y>0)
				printf("segundo\n");
			if(x<0 && y<0)
				printf("terceiro\n");	
		}
		
		else 
			exit(1);
	} while(x!=0 && y!=0);
}1