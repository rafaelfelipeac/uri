#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c, n, i;

	scanf("%i", &n);

	for (i = 0; i < n; i++) {
		scanf("%i %i", &a, &b);

		c = (a*b) / 2;

		printf("%i cm2\n", c);
	}
	system("pause");
}1