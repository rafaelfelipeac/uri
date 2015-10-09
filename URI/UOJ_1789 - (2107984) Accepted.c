#include <stdio.h>
#include <stdlib.h>

main()
{
	int v[500], n, i, maior;
	
	while (scanf("%i", &n) == 1) {
		for (i = 0; i < n; i++) {
			scanf("%i", &v[i]);
		}

		maior = 0;

		for (i = 0; i < n; i++) {
			if (v[i]>maior)
				maior = v[i];
		}

		if (maior < 10)
			printf("1\n");
		else if (maior < 20)
			printf("2\n");
		else if (maior >= 20)
			printf("3\n");
	}

	system("pause");
}1