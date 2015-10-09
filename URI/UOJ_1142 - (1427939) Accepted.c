#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i;
	
	scanf("%i", &n);
	
	for(i=0; i<n; i++)
		printf("%i %i %i PUM\n",((2*i+2*i)+1), ((2*i+2*i)+2), ((2*i+2*i)+3));
		
	system("pause");
}1