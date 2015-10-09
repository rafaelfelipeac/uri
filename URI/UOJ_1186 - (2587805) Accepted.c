#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main() {
	int i, j, c = 0, l = 0, cont = 0;
	float m[12][12], t = 0;
	int z = 12;
	char op[10];
	scanf("%s", &op[0]);

	for (i = 0; i < z; i++) {
		for (j = 0; j < z; j++) {
			scanf("%f", &m[i][j]);
		}
	}
	/*printf("\n");
	for (i = 0; i < z; i++) {
	for (j = 0; j < z; j++) {
	printf("%.0f\t", m[i][j]);
	}
	printf("\n");
	}
	printf("\n");*/
	for (i = 0; i < z; i++) {
		for (j = 0; j < z; j++) {
			l = (z-1) - j;
			c = 0 + j;
			if (i>l && c>=j) {
				//printf("VALOR = %.0f\n", m[i][j]);
				t += m[i][j];
				cont++;
			}
		}
	}
	if (strcmp(op, "S") == 0)
		printf("%.1f\n", t);
	if (strcmp(op, "M") == 0)
		printf("%.1f\n", t / cont);

	system("pause");

}1