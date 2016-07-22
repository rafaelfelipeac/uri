#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, a, b, rafael, beto, carlos, i;
	
	scanf("%i", &n);
	
	for(i=0; i<n; i++)
	{
		rafael = 0;
		beto = 0;
		carlos = 0;
		
		scanf("%i %i", &a, &b);
		
		rafael = ((3*a)*(3*a)) + (b*b);
		beto = 2*((a*a)) + ((5*b)*(5*b));
		carlos = -100*a + (b*b*b);
		
		if(rafael > beto && rafael > carlos)
			printf("Rafael ganhou\n");
		if(beto > rafael && beto > carlos)
			printf("Beto ganhou\n");
		if(carlos > rafael && carlos > beto)
			printf("Carlos ganhou\n");
	}
	
	system("pause");
}