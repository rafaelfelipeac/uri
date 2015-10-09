#include <stdio.h>
#include <stdlib.h>

main()

{
	//int raio = 0, cubo=0;
	double volume = 0, pi = 0, qpt = 0, raio=0, cubo=0;

	qpt = 4.0/3.0;
	pi = 3.14159;

	scanf("%lf", &raio);

	cubo = raio*raio*raio;

	printf("VOLUME = %.3lf\n", cubo*qpt*pi);

	system("pause");

}1