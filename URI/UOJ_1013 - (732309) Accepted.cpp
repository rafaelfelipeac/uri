#include <stdio.h>
#include <stdlib.h>

main()

{
    int a, b, c, maior;

    scanf("%i %i %i", &a, &b, &c);

    if (a > b && a > c)
    {
        maior = a;
    }
    else if (b > a && b > c)
    {
        maior = b;
    }
    else if (c > a && c > b)
    {
        maior = c;
    }

    printf("%i eh o maior\n", maior);

    return 0;
}
