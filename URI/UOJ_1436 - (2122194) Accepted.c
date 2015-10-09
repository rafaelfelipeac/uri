#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main()
{
	int n, i, e, p[15], cont = 0, j;

	scanf("%i", &n);

	while (cont < n) {
		cont++;
		scanf("%i", &e);
		for (j = 0; j < e; j++) {
			scanf("%i", &p[j]);
		}

		if (p[0] < p[1]) { //crescendo
			if (e % 2 == 0) 
				printf("Case %i: %i\n", cont, p[e / 2]);
			else
				printf("Case %i: %i\n", cont, p[e / 2]);
		}
		else {
			if (e % 2 == 0) //decrescendo
				printf("Case %i: %i\n", cont, p[e / 2]);
			else
				printf("Case %i: %i\n", cont, p[e / 2]);
		}
	}
	system("pause");
}1