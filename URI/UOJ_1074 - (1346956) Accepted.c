#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i, j;
	
	scanf("%i", &n);
	
	int m[n];
	
	for(j=0; j<n; j++)
		scanf("%i", &m[j]);
	
	for(i=0; i<n;i++)
	{
		if(m[i]%2==0)
		{
			if(m[i]<0)
				printf("EVEN NEGATIVE\n");
			if(m[i]>0)
				printf("EVEN POSITIVE\n");
			if(m[i]==0)
				printf("NULL\n");
		}
		else
		{
			if(m[i]<0)
				printf("ODD NEGATIVE\n");
			if(m[i]>0)
				printf("ODD POSITIVE\n");
			if(m[i]==0)
				printf("NULL\n");
		}
	}
	
	system("pause");
}1