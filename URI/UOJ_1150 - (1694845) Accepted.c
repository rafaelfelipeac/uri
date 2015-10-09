#include <stdio.h>
#include <stdlib.h>

main() {
	int x, z, i, t, cont;

	x = 0;
	z = 0;
	t = 0;
	cont = 0;

	scanf("%i", &x);

	do {
		scanf("%i", &z);
	} while (z <= x);
	// funcionando

	t = x;

	for (i = x; i < 10000; i++) {
		cont++;
		t += i;

		if (t >= z) {
			cont++;
			i += 10000;
		}
	}

	printf("%i\n", cont);

	system("pause");
}1