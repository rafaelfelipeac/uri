#include <stdio.h>
#include <stdlib.h>

main () {
	
	int n, i;
	
	scanf("%i", &n);
	
	for(i=1; i<=n; i++) {
		printf("%i %i %i\n", i, (i*i), (i*i*i));
	}
	
	return 0;
	
}