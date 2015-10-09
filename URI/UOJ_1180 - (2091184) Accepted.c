#include <stdio.h>
#include <stdlib.h>

main()
{
	int v[1000], n, i, me, pos;

	scanf("%i", &n);

	for (i = 0; i < n; i++) 
		scanf("%i", &v[i]);

	me = v[0];

	for (i = 0; i < n; i++) {
		if (v[i] < me) {
			me = v[i];
			pos = i;
		}
	}

	printf("Menor valor: %i\n", me);
	printf("Posicao: %i\n", pos);

	system("pause");
}1