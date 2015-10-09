#include <stdio.h>
#include <stdlib.h>

main()
{
    float sa, ns, rea, ind;

    scanf("%f", &sa);

    if(sa <= 400.00)
        ns = sa+((sa*15)/100);
    else if(sa <= 800.00)
        ns = sa+((sa*12)/100);
    else if(sa <= 1200.00)
        ns = sa+((sa*10)/100);
    else if(sa <= 2000.00)
        ns = sa +((sa*7)/100);
    else if(sa > 2000.00)
        ns = sa +((sa*4)/100);

    rea = ns-sa;

    if(sa <= 400)
        ind = 15;
    else if(sa <= 800)
        ind = 12;
    else if(sa <= 1200)
        ind = 10;
    else if(sa <= 2000)
        ind = 7;
    else if(sa >= 2000)
        ind = 4;


    printf("Novo salario: %.2f\n", ns);
    printf("Reajuste ganho: %.2f\n", rea);
    printf("Em percentual: %.0f %%\n", ind);

    return 0;
}
