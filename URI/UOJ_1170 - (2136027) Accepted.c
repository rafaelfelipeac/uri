#include <stdio.h>
#include <stdlib.h>

main()
{
	float n, a;
	int cont=0, v, c=0;

	scanf("%i", &v);

	while (c<v) {
		scanf("%f", &n);
		cont = 0;
		a = n;

		while (a > 1) {
			cont++;
			a = n / 2;
			n = a;
			//printf("%f")
		}

		printf("%i dias\n", cont);
		c++;
	}
	system("pause");
}1