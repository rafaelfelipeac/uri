#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0, v[1000], cont = 0, i=0;
	scanf("%i", &n);
	for (i = 0; i < 1000; i++) {
		v[i] = cont;
		cont++;
		if (cont == (n))
			cont = 0;
		printf("N[%i] = %i\n", i, v[i]);
	}
	system("pause");


}1