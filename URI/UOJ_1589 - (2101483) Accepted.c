#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, a, b, i;

	scanf("%i", &n);

	for (i = 0; i < n; i++) {
		scanf("%i %i", &a, &b);

		printf("%i\n", a + b);
	}
	system("pause");
}1