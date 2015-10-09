#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i;

	scanf("%i", &n);

	for (i = 0; i < n; i++) {
		if (i != (n - 1))
			printf("Ho ");
		else
			printf("Ho");
	}
	printf("!\n");

	system("pause");

}1