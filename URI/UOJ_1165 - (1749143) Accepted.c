#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i, j, a = 0, cont = 0, p=0, np=0;

	scanf("%i", &n);

	for (i = 1; i <= n; i++) {
		scanf("%i", &a);
		
		if (a == 1)
			printf("%i nao eh primo\n", a);
		if (a == 2)
			printf("%i eh primo\n", a);

		if (a > 2) {
			if (a % 2 == 0)
				printf("%i nao eh primo\n", a); // todos os numeros pares depois de 2

			else {
				for (j = 1; j <= 100000; j++) {
					if (a%j == 0)
						cont++;

					if (cont > 2) {
						np++;
						j += 10000000;
					}
				}

				if (np == 1)
					//printf("%i eh primo\n", a);
					printf("%i nao eh primo\n", a);
				else
					printf("%i eh primo\n", a);
				//printf("%i nao eh primo\n", a);

				np = 0;
				cont = 0;
			}
		}			
	}

	system("pause");

}1