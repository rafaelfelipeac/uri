#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, t, i, j;
	
	a=b=t=0;
	
	scanf("%i", &a);
	scanf("%i", &b);
	
	if(a<b)
	{
		for(i=a; i<=b; i++)
		{
			if(i%13!=0)
				t+=i;
		}
	}
	
	if(b<a)
	{
		for(i=b; i<=a; i++)
		{
			if(i%13!=0)
				t+=i;
		}
	}
	
	printf("%i\n", t);
	
	system("pause");
}1