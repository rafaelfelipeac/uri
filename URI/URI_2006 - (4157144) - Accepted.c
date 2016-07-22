#include <stdio.h>
#include <stdlib.h>

main()
{
	int t, ar[5], i, cont = 0;
	
	scanf("%i", &t);
	
	for(i=0; i<5; i++)
	{
		scanf("%i", &ar[i]);
	}
	
	for(i=0; i<5; i++)
	{
		if(ar[i] == t)
			cont++;
	}
	
	printf("%i\n", cont);
	
	system("pause");
}