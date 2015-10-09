#include <stdio.h>
#include <stdlib.h>

main()
{
	int m=0, n=0, i, s=0, cont=0;
	
	do
	{
		s=0;
		cont=0;
		
		scanf("%i %i", &m, &n);
		fflush(stdin);
							
		if(m>0 && n>0)
		{
			if(m>n)
			{
				for(i=n; i<=m; i++)
				{
					printf("%i ", i);
					s+=i;
				}
				printf("Sum=%i\n", s);
			}
		
			if(n>m)
			{
				for(i=m; i<=n; i++)
				{
					printf("%i ", i);
					s+=i;
				}
				printf("Sum=%i\n", s);
			}
		}
		
		else 
			exit(1);
		
	} while(cont<1);
	
	system("pause");
}1