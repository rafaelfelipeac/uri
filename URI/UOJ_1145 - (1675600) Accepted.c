#include <stdio.h>
#include <stdlib.h>

main () {
	
	int na, nb, i, cont=0;
	
	scanf("%i %i", &na, &nb);
	
	for(i=1; i<=nb; i++) {
		cont++;
		printf("%i", i);
		
		
		if(cont == na) {
			printf("\n");
			cont=0;
		}		
		else {
			printf(" ");
		}
	
	}
	return 0;	
}1