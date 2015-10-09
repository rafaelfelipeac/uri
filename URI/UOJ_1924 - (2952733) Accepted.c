#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int n, i, cont=0;
	char ch[100];
	
	scanf("%i", &n);
	
	while(cont!=(n+1))
	{
		gets(ch);
		fflush(stdin);
		cont++;
	}
	
	printf("Ciencia da Computacao\n");
	
	system("pause");
}1