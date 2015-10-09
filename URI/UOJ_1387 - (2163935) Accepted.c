#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b;

	do {
		scanf("%i", &a);
		scanf("%i", &b);
		if (a + b != 0)
			printf("%i\n", a + b);
		else
			break;
	} while (a != 0 && b != 0);
	system("pause");
}1