#include <stdio.h>
#include <stdlib.h>


main() {
	int n = 0, i, um=-1, t=0, nn, j;
	scanf("%i", &n);
	for (i = 0; i < n; i++, um=1, t=0) {
		scanf("%i", &nn);
		for (j = 0; j < nn; j++) {
			if (j == 0) {
				um = -1;
				t = 0;
			}
			um *= -1;
			t += um;
			//printf("um = %i\n", um);
		}
		printf("%i\n", t);
	}
	system("pause");
}1