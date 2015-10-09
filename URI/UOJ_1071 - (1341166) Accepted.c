#include <stdio.h>
#include <stdlib.h>

int soma(int num, int num2);

main()
{
	int x,y, a;
	
	scanf("%i", &x);
	scanf("%i", &y);
	a=soma(x, y);
	printf("%i\n", a);
	
	return 0;
}

int soma(int num, int num2)
{
	int i, s=0;
	
	if(num < num2)
	{
		for(i=num; i<num2; i++)
		{
			if(i%2!=0)
			{
				//printf("%i\n", i);
				s+=i;
			}
		}
	}
	
	if(num2 < num)
	{
		for(i=num; i>num2; i--)
		{
			if(i%2!=0)
			{
				//printf("%i\n", i);
				s+=i;
			}
		}
	}
	
	
	return s;
}1