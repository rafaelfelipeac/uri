#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, a[10000], b[10000], i, ma=0, jo=0;

	while (1) {
		ma = 0;
		jo = 0;
		scanf("%i", &n);

		if (n == 0)
			break;

		for (i = 0; i < n; i++)
			scanf("%i", &a[i]);

		for (i = 0; i < n; i++) {
			if (a[i] == 0)
				ma++;
			else
				jo++;
		}
		printf("Mary won %i times and John won %i times\n", ma, jo);
	}

	system("pause");
}1