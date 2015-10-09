#include <stdio.h>
#include <stdlib.h>

main()
{
	float va[100], vb[100], vp[100];
	int pos, i, cont=0;

	pos = 0;

	for (i = 0; i < 100; i++) {
		scanf("%f", &va[i]);

		if (va[i] <= 10) {

			vp[pos] = i;
			vb[pos] = va[i];
			pos++;
			cont += 1;
		}
	}

	for (i = 0; i < cont; i++) { // erro está aqui. preciso arrumar outro critério de parada
		printf("A[%.0f] = %.1f\n", vp[i], vb[i]);
	}

	system("pause");
}1