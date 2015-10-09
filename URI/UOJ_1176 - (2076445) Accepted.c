#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, n2, i, cont = 0;

	scanf("%i", &n);

	long long int a, b, c, v[60];

	a = 0;
	b = 1;

	do {
		c = 0;
		v[0] = 0;
		v[1] = 1;
		scanf("%i", &n2);
		for (i = 2; i < (n2 + 1); i++) {
			c = a + b;
			a = b;
			b = c;
			v[i] = c;
		}

		printf("Fib(%i) = %lld\n", n2, v[n2]);

		a = 0;
		b = 1;
		cont++;
	} while (cont != n);

	system("pause");
}1