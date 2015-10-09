#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, n = 0, t = 0;

	scanf("%i", &n);

	for (i = 1; i < n; i++) {
		if (i==1) 
			t = n * (n - i);
		else
			t *= (n - i);

		//printf("%i = %i\n", i, t);

	}

	printf("%i\n", t);

	system("pause");
}1