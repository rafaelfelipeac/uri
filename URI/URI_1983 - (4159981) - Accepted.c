#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
	int ara[100];
	float arn[100];
} ALUNO;

main()
{
	int n, i;
	ALUNO a;
	float alta = 0;
	
	scanf("%i", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%i", &(a.ara[i]));
		scanf("%f", &(a.arn[i]));
	}
	
	alta = a.arn[0];
	
	for(i=0; i<n; i++)
	{
		if(a.arn[i] > alta)
			alta = a.arn[i];
	}
	
	if(alta >= 8)
	{
		for(i=0; i<n; i++)
		{
			if(a.arn[i] == alta)
				printf("%i\n", a.ara[i]);
		}
	}
	else
		printf("Minimum note not reached\n");
	
	system("pause");
}

