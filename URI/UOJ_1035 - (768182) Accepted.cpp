#include <stdio.h>
#include <stdlib.h>

main()

{
    int a, b, c, d, resto;

    scanf("%i %i %i %i", &a, &b, &c, &d);

    resto = a % 2;

    if (b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0 && resto==0)
    {
        printf("Valores aceitos\n");
    }
    else
        printf("Valores nao aceitos\n");

    return 0;
}
