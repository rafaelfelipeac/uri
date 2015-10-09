#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, t = 0, i, cont = 0, cont2=0, opa=0;

	do {
		scanf("%i", &n);
		

		if (n == 0) {
			opa++;
		}			
		else {
			i = n;
			cont2 = 0;

			do {
				if (i % 2 == 0) {
					t += i;
					cont++;

					if (cont == 5)
						cont2 = 1;
				}
				i++;
			} while (cont2 != 1);

			printf("%i\n", t);

			cont = 0;
			t = 0;
		}
	} while (n != 0);

	system("pause");
}1