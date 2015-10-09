#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main() {
	int n = 0, i;
	char aux[50];
	char thor[] = { "Thor" };
	int auxi = 0;
	scanf("%i", &n);
	for (i = 0; i < n; i++) {
		scanf("%s %i", &aux, &auxi);
		if (strcmp(aux, "Thor")==0)
			printf("Y\n");
		else
			printf("N\n");
	}
	system("pause");
}1