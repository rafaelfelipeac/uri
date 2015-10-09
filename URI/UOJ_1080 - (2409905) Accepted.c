#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, pos, n[100], ma=0;

	for (i = 0; i < 100; i++)
		scanf("%i", &n[i]);

	for (i = 0; i < 100; i++) {
		if (n[i] > ma) {
			ma = n[i];
			pos = i;
		}
	}

	printf("%i\n%i\n", ma, pos + 1);

	system("pause");
}1