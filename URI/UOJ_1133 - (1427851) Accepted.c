#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c, i;
	
	a=b=c=0;
	
	scanf("%i", &a);
	scanf("%i", &b);
	
	if(a<b)
	{
		for(i=a+1; i<b;i++)
		{
			if(i%5==2 || i%5==3)
				printf("%i\n", i);
		}
	}
	
	if(b<a)
	{
		for(i=b+1; i<a;i++)
		{
			if(i%5==2 || i%5==3)
				printf("%i\n", i);
		}
	}
	
	system("pause");
}	1