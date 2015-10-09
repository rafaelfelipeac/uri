#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i;

	scanf("%i", &n);

	for (i = 1; i <= n; i++) {
		if (n%i == 0)
			printf("%i\n", i);
	}

	system("pause");
}1