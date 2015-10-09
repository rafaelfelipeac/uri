#include <stdio.h>
#include <stdlib.h>

main()
{
	float i, j;
	int cont = 0;
	int ii=0, jj=0;
	
	for (i = 0; i < 2; i += 0.2) {
		for (j = 1; j < 4; j++) {
			if (i==0 || i == 1 || i==2) {
				printf("I=%.0f J=%.0f\n", i, j + i);
			}
			else
				printf("I=%.1f J=%.1f\n", i, j+i);
			cont++;
			if (cont == 3) {
				//printf("HA");
				j += 0.2;
				cont = 0;
			}
		}
	}
	printf("I=2 J=3\n");
	printf("I=2 J=4\n");
	printf("I=2 J=5\n");

	system("pause");
}1