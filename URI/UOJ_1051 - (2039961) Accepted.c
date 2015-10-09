#include <stdio.h>
#include <stdlib.h>

main()
{
	float s, s2, s3, s4, aux, aux2;

	scanf("%f", &s);

	if (s < 2000)
		printf("Isento\n");
	else if (s < 3000) {
		aux = s - 2000;
		s2 = (aux / 100) * 8;
		printf("R$ %.2f\n", s2);
	}
	else if (s < 4500) {
		aux = s - 2000;
		s2 = (1000 / 100) * 8;
		aux2 = aux - 1000;
		s3 = (aux2 / 100) * 18;
		printf("R$ %.2f\n", s3 + s2);
	}
	else {
		aux = s - 2000;
		s2 = (1000 / 100) * 8;
		s3 = (1500 / 100) * 18;
		aux2 = s - 4500;
		s4 = (aux2 / 100) * 28;
		printf("R$ %.2f\n", s4 + s3 + s2);
	}



	system("pause");
}1