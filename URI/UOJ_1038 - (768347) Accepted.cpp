#include <stdio.h>
#include <stdlib.h>

main()

{
    float c, q;
    float valor;

    scanf("%f %f", &c, &q);

    if(c==1)
    {
        valor = 4.00;
        printf("Total: R$ %.2f\n", q * valor);
    }

    if(c==2)
    {
        valor = 4.50;
        printf("Total: R$ %.2f\n", q * valor);
    }

    if(c==3)
    {
        valor = 5.00;
        printf("Total: R$ %.2f\n", q * valor);
    }

    if(c==4)
    {
        valor = 2.00;
        printf("Total: R$ %.2f\n", q * valor);
    }

    if(c==5)
    {
        valor = 1.50;
        printf("Total: R$ %.2f\n", q * valor);
    }

    return 0;

}
