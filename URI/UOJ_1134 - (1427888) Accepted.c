#include <stdio.h>
#include <stdlib.h>

main()
{
	int c,a,g,d,exit;
	
	c=a=g=d=exit=0;
	
	do
	{
		do
		{
			scanf("%i", &c);
		} while(c<1 || c>4);
		
		if(c==1)
			a++;
		if(c==2)
			g++;
		if(c==3)
			d++;
		if(c==4)
			exit++;	
	} while(exit<1);
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %i\n", a);
	printf("Gasolina: %i\n", g);
	printf("Diesel: %i\n", d);
	
	system("pause");
}1