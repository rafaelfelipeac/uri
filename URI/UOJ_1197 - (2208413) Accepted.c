#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b;

	while (scanf("%i %i", &a, &b) != EOF) {
		a *= 2;
		printf("%i\n", a*b);
	}
	system("pause");
}1