#include <stdio.h>
#include <stdlib.h>

main()
{
	int l, i, j;
	char c;
	float m[12][12], s=0;

	scanf("%i ", &l);
	scanf("%c", &c);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%f", &m[i][j]);
		}
	}

	for (i = 0; i < 12; i++) 
		s += m[l][i];

	if (c == 'S') {
		printf("%.1f\n", s);
	}
	if (c == 'M')
		printf("%.1f\n", s/12);

	system("pause");
}1