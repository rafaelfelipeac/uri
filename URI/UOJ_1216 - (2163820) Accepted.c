#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	double n, total=0;
	int cont=0;
	char nome[50];

	while (gets(nome)) {
		//fflush(stdin);
		scanf("%lf", &n);
		total += n;
		cont++;
	}
	printf("%.1f\n", total / cont);

	system("pause");
}1