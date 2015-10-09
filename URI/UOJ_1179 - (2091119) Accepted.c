#include <stdio.h>
#include <stdlib.h>

main()
{
	int p[5], i[5], k, n, pa=0, ia=0, j;

	for (k = 0; k < 15; k++) {
		scanf("%i", &n);

		if (n % 2 == 0) {
			p[pa] = n;
			pa++;
		}
		else {
			i[ia] = n;
			ia++;
		}

		if (pa == 5) {
			for (j = 0; j < 5; j++)
				printf("par[%i] = %i\n", j, p[j]);
			pa = 0;
		}
		if (ia == 5) {
			for (j = 0; j < 5; j++)
				printf("impar[%i] = %i\n", j, i[j]);
			ia = 0;
		}
	}
	for (k = 0; k < ia; k++)
		printf("impar[%i] = %i\n", k, i[k]);
	for (k = 0; k < pa; k++)
		printf("par[%i] = %i\n", k, p[k]);

	system("pause");
		
}1