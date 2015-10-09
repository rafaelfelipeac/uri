#include <stdio.h>
#include <stdlib.h>

void seis(int num);

main()
{
	int x;
	
	scanf("%i", &x);
	
	seis(x);
	
	return 0;
}

void seis(int num)
{
	int i, cont=0;
	
	for(i=0; cont < 6; i++)
	{
		if((num+i)%2!=0) 
		{
				printf("%i\n", (num+i));
				cont++;
		}
	}
}1