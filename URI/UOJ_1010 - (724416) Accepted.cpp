#include <stdio.h>
#include <stdlib.h>

main()

{
    int c1, q1, c2, q2;
    float v1, v2;

    scanf("%i %i %f", &c1, &q1, &v1);

    scanf("%i %i %f", &c2, &q2, &v2);

    printf("VALOR A PAGAR: R$ %.2f\n", (q1 * v1) + (q2 * v2) );

    return 0;

}
