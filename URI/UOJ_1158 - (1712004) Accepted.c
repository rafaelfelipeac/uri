#include <stdio.h>
#include <stdlib.h>

main()
{
	int x, y, i, t, opa=0, cont=0, n, cont2=0, j=0, stop=0;

	x = 0;
	y = 0;
	t = 0;
	n = 0;

	scanf("%i", &n);

	for (j = 0; j < n; j++) {
		cont2++; 

		scanf("%i %i", &x, &y);
		stop = 0;
		i = x;

		do {
		//for (i = x; i<10000000000000000000; i++) {
			
			if (i % 2 != 0) {
				t += i;
				cont++;
				if (cont == y)
					stop = 1;
			}
			i++;
		} while (stop!=1);

			
			/*if (i % 2 == 0)
				opa++;
			else {
				t += i;
				cont++;
				if (cont == y)
					i += 1000;
			}*/

		printf("%i\n", t);

		t = 0;
		cont = 0;

	} 

	/*for (i = x; i < 100; i++) {
		if (i % 2 == 0)
			printf("IF %i\n", i);		
		else {
			t += i;
			printf("ELSE %i\n", i);
			cont++;

			if (cont == y)
				i += 100;
		}
	}*/

	//printf("%i\n", t);
	//t = 0;

	system("pause");
}1