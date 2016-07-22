#include <stdio.h>
#include <stdlib.h>

main()
{
	int alt, n, i, cont = 0;
	
	scanf("%i %i", &alt, &n);
	
	int ar[n];
	for(i=0; i<n; i++)
	{
		scanf("%i", &ar[i]);
	}
	
	/*for(i=0; i<n; i++)
		printf("%i\t", ar[i]);
	printf("\n");*/
		
	for(i=0; i<n; i++)
		if(i+1 < n)
			if(ar[i]-ar[i+1] > alt || ar[i+1]-ar[i] > alt)
				cont = 1;
	
	if(cont==0)
		printf("YOU WIN\n");
	else
		printf("GAME OVER\n");
	
	system("pause");
}