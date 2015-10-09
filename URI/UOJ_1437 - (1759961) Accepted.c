#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i, d, cont=0, cont2=0;
	char c;

	do {
		n = 0;

		scanf("%i", &n);

		if (n == 0)
			break;

		d = 0;

		for (i = 0; i < (n+1); i++) {
	
			scanf("%c", &c);
			fflush(stdin);

			if (c == 'D') //fun 
				d += 1;
			if (c == 'E') //CIONANDO
				d -= 1;			
		} 

		if (d > 0) {
			for (i = 0; i < 1000; i += 4) {
				if (i == d)
					printf("N\n");
			}
			for (i = 1; i < 1000; i += 4) {
				if (i == d)
					printf("L\n");
			}
			for (i = 2; i < 1000; i += 4) {
				if (i == d)
					printf("S\n");
			}
			for (i = 3; i < 1000; i += 4) {
				if (i == d)
					printf("O\n");
			}
		}
		else {
			//printf("ENTREI PORRA \n");
			for (i = 0; i >= -1000; i -= 4) {
				if (i == d)
					printf("N\n");
			}
			for (i = -1; i >=-1000; i -= 4) {
				if (i == d)
					printf("O\n");
			}
			for (i = -2; i >= -1000; i -= 4) {
				if (i == d)
					printf("S\n");
			}
			for (i = -3; i <= -1000; i -= 4) {
				if (i == d)
					printf("L\n");
			}
		}
			
	} while (cont2 != 1);

	system("pause");
}1