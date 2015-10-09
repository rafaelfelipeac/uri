#include <stdio.h>
#include <stdlib.h>

main()
{
	int col, i, j;
	char c;
	float m[12][12], s=0;

	scanf("%i ", &col);
	scanf("%c", &c);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%f", &m[i][j]);
		}
	}

	for (i = 0; i < 12; i++) 
		s += m[i][col];

	if (c == 'S') {
		printf("%.1f\n", s);
	}
	if (c == 'M')
		printf("%.1f\n", s/12);

	system("pause");
}1