#include <stdio.h>

main()
{
    int a, b, c, d, e, par;

    par = 0;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    scanf("%i", &e);

    if(a % 2 == 0)
        par++;
    if(b % 2 == 0)
        par++;
    if(c % 2 == 0)
        par++;
    if(d % 2 == 0)
        par++;
    if(e % 2 == 0)
        par++;

    printf("%i valores pares\n", par);

    return 0;

}
