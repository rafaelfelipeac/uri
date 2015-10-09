#include <stdio.h>
#include <stdlib.h>

void intervalo(int num);

main()
{
	int n, x[10000], i, in=0, out=0; 
	
	scanf("%i", &n);	
	
	for(i=0; i < n; i++)
	{
		scanf("%i", &x[i]);
		
		if(x[i] >= 10 && x[i] <= 20)
			in++;
		else 
			out++;
	}
	
	printf("%i in\n", in);
	printf("%i out\n", out);
	
	return 0;
}
1