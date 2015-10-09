#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, j, k=0;

	for(i=1; i<=9; i+=2)
	{
		for(j=(7+k); j>=(5+k); j--)
		{
			printf("I=%i J=%i\n", i, j);
			if(j==5+k)
				k+=2;
		}
	}

	return 0;
}1