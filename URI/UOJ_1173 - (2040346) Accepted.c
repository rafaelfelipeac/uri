#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, v[10], i, a;

	scanf("%i", &n);

	v[0] = n;

	a = n * 2;

	for (i = 1; i < 10; i++) {
		v[i] = v[i-1] * 2;
	}

	for (i = 0; i < 10; i++)
		printf("N[%i] = %i\n", i, v[i]);

	system("pause");
}1