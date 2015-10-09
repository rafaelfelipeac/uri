#include <stdio.h>
#include <stdlib.h>

main()
{
	int a=0, b=0, c=0;
	
	scanf("%i %i", &a, &b);
	
	if(a==b)
		c = a;
	else if(a!=b) 
	{
		if(a>b)
			c = a;
		else
			c = b;
	}
	
	printf("%i\n", c);
	
	system("pause");		
}1