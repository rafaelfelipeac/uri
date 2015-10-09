#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c, d, t=0;
	scanf("%i %i %i %i", &a, &b, &c, &d);
	t = a-1;
	t += b-1;
	t += c-1;
	t += d;
	printf("%i\n", t);
	
	system("pause");	
}
