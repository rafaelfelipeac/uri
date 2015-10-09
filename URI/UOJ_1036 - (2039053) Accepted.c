#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	double a, b, c, delta, x1, x2, raiz;

	scanf("%lf %lf %lf", &a, &b, &c);

	delta = (b*b) - (4*a*c);
	raiz = sqrt(delta);
	x2 = (b + raiz) / (2 * a);
	x1 = (b - raiz) / (2 * a);

	if (a == 0 || delta < 0)
		printf("Impossivel calcular\n");
	else {
		//printf("RAIZ = %f\n", raiz);
		//printf("DELTA =  %f\n", delta);
		printf("R1 = -%.5f\n", x1);
		printf("R2 = -%.5f\n", x2);
	}


	system("pause");

}1