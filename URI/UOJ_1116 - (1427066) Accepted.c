#include <stdio.h>
#include <stdlib.h>

main()
{
	float a=0, b=0, c=0;
	int i, n=0;
	
	scanf("%i", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%f %f", &a, &b);
		
		if(b==0)
			printf("divisao impossivel\n");
		else
		{
			if(a==0)
				printf("0.0\n");
				
			else
			{
				printf("%.1f\n", a/b);
			}
		}
	}
	
	system("pause");
}1