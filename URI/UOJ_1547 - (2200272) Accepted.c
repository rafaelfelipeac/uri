#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i, q, qa[10], ns, j, pos=0, dif=1000, cont=0, men=1000;

	scanf("%i", &n);
	for (i = 0; i < n; i++) {
		scanf("%i %i", &q, &ns);
		for (j = 0; j < q; j++) {
			scanf("%i", &qa[j]);
		}	
		men = 1000;
		for (j = 0; j < q; j++) {
			cont = 0;
			if (qa[j] == ns) {
				printf("%i\n", j + 1);
				cont++;
				break;
			}
			else if (qa[j] > ns) {
				dif = qa[j] - ns;
				if (dif < men) {
					men = dif;
					pos = j+1;
				}
			}
			else {
				dif = ns - qa[j];
				if (dif < men) {
					men = dif;
					pos = j+1;
				}
			}
		}
		if (cont == 0) {
			printf("%i\n", pos);
		}
	}
	system("pause");
}1