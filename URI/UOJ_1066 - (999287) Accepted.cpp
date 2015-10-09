#include <stdio.h>

main()
{
    int a, b, c, d, e, par, impar, posi, nega;

    par = 0;
    impar = 0;
    posi = 0;
    nega = 0;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    scanf("%i", &e);

    if (a % 2 == 0)
        par++;
    else
        impar++;
    if (b % 2 == 0)
        par++;
    else
        impar++;
    if (c % 2 == 0)
        par++;
    else
        impar++;
    if (d % 2 == 0)
        par++;
    else
        impar++;
    if (e % 2 == 0)
        par++;
    else
        impar++;


    if(a > 0)
        posi++;
    else if (a < 0)
        nega++;
    if(b > 0)
        posi++;
    else if (b < 0)
        nega++;
    if(c > 0)
        posi++;
    else if (c < 0)
        nega++;
    if(d > 0)
        posi++;
    else if (d < 0)
        nega++;
    if(e > 0)
        posi++;
    else if (e < 0)
        nega++;

    printf("%i valor(es) par(es)\n", par);
    printf("%i valor(es) impar(es)\n", impar);
    printf("%i valor(es) positivo(s)\n", posi);
    printf("%i valor(es) negativo(s)\n", nega);

    return 0;
}
