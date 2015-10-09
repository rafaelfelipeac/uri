#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
main() {
    int i, j, c = 0, l = 0, cont = 0, cont2 = 0;
    double m[12][12], t = 0;
    int z = 12;
    char op[10];
    scanf("%s", &op[0]);
 
    for (i = 0; i < z; i++) {
        for (j = 0; j < z; j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    /*printf("\n");
    for (i = 0; i < z; i++) {
    	for (j = 0; j < z; j++) {
    	printf("%.0f   ", m[i][j]);
    	}
    	printf("\n");
    }
    printf("\n");*/
    for (i = 0; i < z; i++) {
        for (j = 0; j < z; j++) {
        	l = i;
        	c = j;
            if (c>(cont2) && c<(z-cont2-1)) {
            	//printf("CONT2=%i\n", cont2);
                //printf("VALOR = %.0f\n", m[i][j]);
                t += m[i][j];
                cont++;
            }
        }
        cont2++;
    }
    if (strcmp(op, "S") == 0)
        printf("%.1lf\n", t);
    if (strcmp(op, "M") == 0)
        printf("%.1lf\n", t / cont);
 
    system("pause");
 
}1