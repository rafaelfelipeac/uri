#include <stdio.h>
#include <stdlib.h>

main()
{
	long long int n, c=0;
	
	scanf("%lli", &n);
	n*=(n-3);
	n/=2;
	printf("%lli\n", n);
	system("pause");
}
