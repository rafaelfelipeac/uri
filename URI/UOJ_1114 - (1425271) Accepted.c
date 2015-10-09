#include <stdio.h>
#include <stdlib.h>

main()
{
	int s=0, c=0;
		
	do
	{
		c=0;
		scanf("%i", &s);
		
		if(s==2002)
			printf("Acesso Permitido\n");
		else 
		{
			printf("Senha Invalida\n");
			c++;
		}
	} while(c>0);
	
	
	system("pause");
}1