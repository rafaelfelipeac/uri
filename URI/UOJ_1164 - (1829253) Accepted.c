#include <stdio.h>
#include <stdlib.h>

main()
{
	int n=0, i = 0, a=0, cont=0, t=0;

	scanf("%i", &n);

	while (cont < n) {
		t = 0;
		cont++;

		scanf("%i", &a);

		for (i = 1; i < a; i++) {
			//printf("%i\n", i);
			if (a % i == 0) {
				//printf("IF - %i\n", i);
				t += i;
			}
		}

		if (t == a)
			printf("%i eh perfeito\n", a);
		else
			printf("%i nao eh perfeito\n", a);
		}

	system("pause");
}1