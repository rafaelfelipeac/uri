#include <stdio.h>
#include <stdlib.h>

main() {
	int a, n, t=0, i;
	
	scanf("%i", &a);
	
	do
	{
		scanf("%i", &n);
	} while(n==0);
	
	for(i=a; i<a+n; i++) {
		t+=i;
	}
	
	printf("%i\n", t);
	
	return 0;
	
}1