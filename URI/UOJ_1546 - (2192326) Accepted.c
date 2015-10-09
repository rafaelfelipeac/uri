#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, k, i, j, c;

	scanf("%i", &n);

	for (i = 0; i < n; i++) {
		scanf("%i", &k);
		for (j = 0; j < k; j++) {
			scanf("%i", &c);

			if (c == 1)
				printf("Rolien\n");
			else if (c == 2)
				printf("Naej\n");
			else if (c==3)
				printf("Elehcim\n");
			else 
				printf("Odranoel\n");
		}
	}
	system("pause");
}1