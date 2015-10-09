#include <stdio.h>
#include <stdlib.h>

main() {
	char f[] = { "LIFE IS NOT A PROBLEM TO BE SOLVED" };

	int n = 0;
	int i;
	scanf("%i", &n);

	for (i = 0; i < n; i++) {
		printf("%c", f[i]);
		if (i == (n-1))
			printf("\n");
	}
	system("pause");

}1