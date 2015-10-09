#include <stdio.h>
#include <stdlib.h>

main()

{
    int n, dias, meses, anos;

    scanf("%i", &n);

    dias = 0;
    meses = 0;
    anos = 0;

    anos = n / 365;
    n = n - (anos * 365);

    meses = n / 30;
    n = n - (meses * 30);

    dias = n;

    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);

    return 0;


}
