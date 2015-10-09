#include <stdio.h>
#include <stdlib.h>

void impar(int num);

main()
{
	int x;
	
	scanf("%i", &x);
	if(x<=1000)
		impar(x);
	return 0;
}

void impar(int num)
{
	int i, opa;
	
	
	for(i=1; i<=num; i++)
	{
		if(i%2!=0)
			printf("%i\n", i);
	}
}
1