#include <stdio.h>
#include <stdlib.h>

main()
{
	long long int a, b, i, tot = 0;
	
	scanf("%lli", &a);
	scanf("%lli", &b);
	
	tot = (a+b)*(b-a+1)/2;
	
	printf("%lli\n", tot);
	
	system("pause");
}