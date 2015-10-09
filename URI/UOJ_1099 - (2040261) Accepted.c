#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, a, b, c=0, i, j;

	scanf("%i", &n);

	for (i = 0; i < n; i++) {
		c = 0;
		scanf("%i %i", &a, &b);

		if (a>b) {
			for (j = a-1; j > b; j--) {
				if (j % 2 != 0)
					c += j;
			}
		}
		else {
			for (j = a+1; j < b; j++) {
				if (j % 2 != 0)
					c += j;
			}
		}

		printf("%i\n", c);
	}
	system("pause");
}1