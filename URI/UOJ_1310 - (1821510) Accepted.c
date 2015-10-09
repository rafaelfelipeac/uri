#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, cPD, rPD[1000], b, lucro = 0, i, t = 0, maior = 0, calc = 0, j, h, k = 0;

	while (scanf("%i", &n) != EOF) {
		//scanf("%i", &n);
		//n = 6;
		scanf("%i", &cPD);
		for (b = 0; b < n; b++) {
			scanf("%i", &rPD[b]);
		}

		for (h = 0; h < n; h++) {
			for (i = 0; i < n; i++) {
				for (j = h; j < (n - i); j++) {
					t += rPD[j];
					//printf("h[%i], i[%i], j[%i] ----- %i ----- TOTAL = %i\n", h, i, j, rPD[j], t);
					k++;
				}
				calc = t - (k*cPD);
				//printf("																		CALC = %i\n", calc);
				if (calc > maior)
					maior = calc;

				k = 0;
				calc = 0;
				t = 0;
				//printf("\n\n\n");
			}
		} 

		

		printf("%i\n", maior);
		maior = 0;
	} 

	system("pause");
}1