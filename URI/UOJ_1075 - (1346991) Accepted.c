#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i;
	
	scanf("%i", &n);
	
	for(i=0; i<10000; i++)
	{
		if(i%n==2)
			printf("%i\n", i);
	}
	
	system("pause");
}1