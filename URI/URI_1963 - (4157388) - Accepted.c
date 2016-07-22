#include <stdio.h>
#include <stdlib.h>

main()
{
	double a, b, dif, por;
	
	scanf("%lf %lf", &a, &b);
	dif = b - a;
	por = dif/a;
	por*=100;
	
	printf("%.2lf%%\n", por);
	system("pause");	
}