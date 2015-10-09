#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	double a, b, c, tang, x, x2, r = 0;

	while(scanf("%lf %lf %lf", &a, &b, &c) == 3) {
		//scanf("%lf %lf %lf", &a, &b, &c);
		r = (((tan(a * 3.141592654 / 180.0)) * b) + c) * 5;
		printf("%.2f\n", r);
	} 

	system("pause");
}1