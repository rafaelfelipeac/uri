#include <stdio.h>
#include <stdlib.h>

main()
{
	int nf, ht;
	float vh;

	scanf("%i", &nf);

	scanf("%i", &ht);

	scanf("%f", &vh);

	printf("NUMBER = %i\n", nf);

	printf("SALARY = U$ %.2f\n",  ht * vh );

	system("pause");

}
