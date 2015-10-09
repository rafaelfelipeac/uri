#include <stdio.h>
#include <stdlib.h>

main()
{
	float a=0, b=0, m=0;
	int cont = 0;

	do {
		scanf("%f", &a);
		
		if (a >= 0) {
			b += a;
			cont++;
		}
	} while (a >= 0);

	m = b / cont;

	printf("%.2f\n", m);

	system("pause");
}1