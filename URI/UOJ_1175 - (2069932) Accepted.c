#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, j;
	float v[20], vb[20];

	for (i = 0; i < 20; i++) {
		scanf("%f", &v[i]);
	}

	for (j = 0; j < 20; j++) {
		vb[j] = v[19 - j];
	}

	for (i = 0; i < 20; i++) {
		printf("N[%i] = %.0f\n", i, vb[i]);
	}

	system("pause");

}1