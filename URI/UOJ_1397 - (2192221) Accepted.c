#include <stdio.h>
#include <stdlib.h>

main()
{
	int n=0, a[10], b[10], i, pa=0, pb=0;

	while (1) {
		pa = 0; 
		pb = 0;

		scanf("%i", &n);

		if (n == 0)
			break;

		for (i = 0; i < n; i++) {
			scanf("%i %i", &a[i], &b[i]);

			if (a[i] > b[i])
				pa++;
			else if (b[i] > a[i])
				pb++;
		}


		printf("%i %i\n", pa, pb);
	}
	system("pause");
}1