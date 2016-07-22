#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char string[20];
	int tam = 0, v = 0, cont = 0, i;
	
	do
	{
		gets(string);
		fflush(stdin);
		tam = strlen(string);
		if(tam == 3)
		{
			for(i=0; i<3; i++)
			{
				if(string[i] == '*')
				{
					if(i==0)
					{
						v+=4;
					}
					if(i==1)
					{
						v+=2;
					}
					if(i==2)
					{
						v+=1;
					}
				}					
			}
		}
		else
		{
			printf("%i\n", v);
			v = 0;
			cont++;
		}
	} while(cont < 3);
	
	system("pause");
}