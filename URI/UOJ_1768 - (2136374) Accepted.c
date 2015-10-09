#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i, j, k;

	while (scanf("%i", &n) == 1) {
		for (i = 0; i < n; i++) {
			if (i % 2 != 1) {
				for (k = (((n - 1 - i)) / 2)-1; k >= 0; k--)
					printf(" ");
				for (j = 0; j < i + 1; j++) {
					printf("*");
				}
				printf("\n");
			}
		}
		for (i = n; i >= 0; i--) {
			for (j = 0; j < 1; j++)
				printf(" ");
			if (i == ((n - 1) / 2)+2) {
				printf("*\n");
				break;
			}
		}
		for (i = n; i >= 0; i--) {
			for (j = 0; j < 1; j++)
				printf(" ");
			if (i == (((n - 1) / 2)+1)+2) {
				printf("***\n");
				break;
			}
		}
		printf("\n");
	}
	system("pause");
}
1