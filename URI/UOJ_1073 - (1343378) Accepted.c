#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i;
	
	scanf("%i", &n);
	
	if(n>5 && n<2000)
		for(i=1; i<=n; i++)
			if(i%2==0)
				printf("%i^2 = %i\n", i, (i*i));
	
	return 0;	
}1