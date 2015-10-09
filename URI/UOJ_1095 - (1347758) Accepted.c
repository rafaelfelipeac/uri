#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, j;

	for(j=60, i=1; j>=0; j--)
	{
		printf("I=%i J=%i\n", i, j);
		i+=3;
		j-=4;
	}

	return 0;
}1