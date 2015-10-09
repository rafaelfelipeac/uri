#include <stdio.h>
#include <stdlib.h>

main() {
	int o, i=0, n[1000000], cont=0, c=0;
	
	
	do {
		i++;
		c++;
		scanf("%i", &n[i+1]);
		
		if(n[i+1] == 0) {
			cont=1;
		}
	} while(cont != 1);
	// está saindo na hora certa
	
	
	for(i=0; i<=c; i++) {
		for(o=1; o<=n[i]; o++) {
			printf("%i", o);
			
			if(o == n[i])
				printf("\n");
			else
				printf(" ");
		}
	}
		
	return 0;
	
}1