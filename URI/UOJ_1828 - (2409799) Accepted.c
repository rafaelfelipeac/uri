#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int n=0, cont=0, v1=0, v2=0;
	char a[30], b[30];

	scanf("%i", &n);
	while (cont < n) {

		cont++;
		
		scanf("%s", &a);
		scanf("%s", &b);

		v1 = 0;
		v2 = 0;

		if (strcmp(a, "pedra") == 0) {

			
			if (strcmp(b, "tesoura") == 0) {
				v1++;
			}
			if (strcmp(b, "papel") == 0) {
				v2++;
			}
			if (strcmp(b, "lagarto") == 0) {
				v1++;
			}
			if (strcmp(b, "Spock") == 0) {
				v2++;
			}
		}
		else if (strcmp(a, "papel") == 0) {
			if (strcmp(b, "tesoura") == 0) {
				v2++;
			}
			if (strcmp(b, "pedra") == 0) {
				v1++;
			}
			if (strcmp(b, "lagarto") == 0) {
				v2++;
			}
			if (strcmp(b, "Spock") == 0) {
				v1++;
			}
		}
		else if (strcmp(a, "tesoura") == 0) {
			if (strcmp(b, "pedra") == 0) {
				v2++;
			}
			if (strcmp(b, "papel") == 0) {
				v1++;
			}
			if (strcmp(b, "lagarto") == 0) {
				v1++;
			}
			if (strcmp(b, "Spock") == 0) {
				v2++;
			}
		}
		else if (strcmp(a, "lagarto") == 0) {
			if (strcmp(b, "tesoura") == 0) {
				v2++;
			}
			if (strcmp(b, "papel") == 0) {
				v1++;
			}
			if (strcmp(b, "pedra") == 0) {
				v2++;
			}
			if (strcmp(b, "Spock") == 0) {
				v1++;
			}
		}
		else if (strcmp(a, "Spock") == 0) {
			if (strcmp(b, "tesoura") == 0) {
				v1++;
			}
			if (strcmp(b, "papel") == 0) {
				v2++;	
			}
			if (strcmp(b, "lagarto") == 0) {
				v2++;
			}
			if (strcmp(b, "pedra") == 0) {
				v1++;
			}
		}

		if (v1 != 0)
			printf("Caso #%i: Bazinga!\n", cont);
		else if (v2 != 0)
			printf("Caso #%i: Raj trapaceou!\n", cont);
		else if (v1 ==0 && v2 == 0)
			printf("Caso #%i: De novo!\n", cont);

	}
	system("pause");
}1