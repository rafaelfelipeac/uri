#include <stdio.h>
#include <stdlib.h>

main()
{
	int n = 0, a, b, aux = 0, i, f = 0;

	a = 0;
	b = 1;

	scanf("%i", &n);

	printf("%i %i", a, b);

	for (i = 0; i < n-2; i++) {
		f = a + b;
		aux = f;
		printf(" %i", f); // 1
		a = b;
		b = aux;

		if (i == (n - 1) - 2)
			printf("\n");

	}

	system("pause");


}1