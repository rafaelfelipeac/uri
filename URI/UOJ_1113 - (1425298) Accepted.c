#include <stdio.h>
#include <stdlib.h>

main()
{
	int a=0, b=0, c=0;
	
	do
	{
		scanf("%i %i", &a, &b);
		fflush(stdin);
		
		if(a==b)
			exit(1);
		
		if(a>b)
			printf("Decrescente\n");
		else
			printf("Crescente\n");

	} while (a!=b);
	
	system("pause");
}1