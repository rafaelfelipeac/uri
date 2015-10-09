#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int n = 0, i;
	char valora[10], nomea[100], valorb[10], nomeb[100], *va=valora, *na=nomea, *vb=valorb, *nb=nomeb;
	long long int numa, numb;
	scanf("%i", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%s %s %s %s", na, va, nb, vb);
		scanf("%i %i", &numa, &numb);
		
		int r = 0;
		
		if((numa+numb)%2==0)
		{
			r = strncmp(va, "PAR", 1);
			if(r==0)
				printf("%s\n", na);
			else
				printf("%s\n", nb);
		}
		else
		{
			r = strncmp(va, "IMPAR", 1);
			if(r==0)
				printf("%s\n", na);
			else
				printf("%s\n", nb);
		}
	}
	system("pause");
}
