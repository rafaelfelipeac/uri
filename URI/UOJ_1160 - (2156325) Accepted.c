#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int n, cont=0, pa, pb, c=0, opa=0;
	double g1, g2;

	scanf("%i", &n);
	do {
		cont++;
		scanf("%i %i %lf %lf", &pa, &pb, &g1, &g2);

		c = 0;
		opa = 0;

		do {
	

			pa = (pa*(1 + (g1 / 100)));
			pb = (pb*(1 + (g2 / 100)));
		
			c++;

			floor(pa);
			floor(pb);

			if (pa > pb || c > 100)
				opa++;
		} while (opa!=1);

		if (c > 100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%i anos.\n", c);

	} while (cont < n);

	system("pause");
}1