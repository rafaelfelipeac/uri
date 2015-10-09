#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c, p1;

	while (scanf("%i %i %i", &a, &b, &c) == 3) {
		p1 = 0;

		if (a == 1)
			p1++;
		if (b == 1)
			p1++;
		if (c == 1)
			p1++;

		if (p1 == 0) {
			printf("*\n");
		}
		if (p1 == 1) {
			if (a == 1)
				printf("A\n");
			if (b == 1)
				printf("B\n");
			if (c == 1)
				printf("C\n");
		}
		if (p1 == 2) {
			if (a == 0)
				printf("A\n");
			if (b == 0)
				printf("B\n");
			if (c == 0)
				printf("C\n");
		}
		if (p1 == 3) {
			printf("*\n");
		}
	}
	system("pause");
}
1