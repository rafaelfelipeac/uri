#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int n, i, tam, j, leds;
	char c[10000];
	 
	scanf("%i ", &n);


	for (i = 0; i < n; i++) {
		leds = 0;
		gets(c);

		tam = strlen(c);
		//printf("C = %i\n", tam);
		for (j = 0; j < tam; j++) {
			if (c[j] == '1')
				leds += 2;
			if (c[j] == '2')
				leds += 5;
			if (c[j] == '3')
				leds += 5;
			if (c[j] == '4')
				leds += 4;
			if (c[j] == '5')
				leds += 5;
			if (c[j] == '6')
				leds += 6;
			if (c[j] == '7')
				leds += 3;
			if (c[j] == '8')
				leds += 7;
			if (c[j] == '9')
				leds += 6;
			if (c[j] == '0')
				leds += 6;
		}
		printf("%i leds\n", leds);
	}
	system("pause");
}
1