#include <stdio.h>
#include <stdlib.h>

main()
{
	double n, v[100], a=0;
	int i;

	scanf("%lf", &n);

	v[0] = n;

	a = n;
	
	for (i = 1; i < 100; i++) {
			v[i] = a/2;
			a = a / 2;
		
	}

	for (i = 0; i < 100; i++) {
		printf("N[%i] = %.4lf\n", i, v[i]);
	}

	system("pause");
}1