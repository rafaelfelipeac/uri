#include <stdio.h>
#include <stdlib.h>

main () {
	int n, i, i2, i3;
	
	scanf("%i", &n);
	
	for(i=1; i<=n; i++) {
		i2 = i*i;
		i3 = i*i*i;
		printf("%i %i %i\n", i, i2, i3);
		printf("%i %i %i\n", i, i2+1, i3+1);
		
	}
	
	return 0;
}1