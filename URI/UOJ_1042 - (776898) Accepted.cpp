#include <stdio.h>
#include <stdlib.h>

main()

{
    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("%i\n", c);
            printf("%i\n", b);
            printf("%i\n", a);
        }

        if (c > b)
        {
            printf("%i\n", b);
            printf("%i\n", c);
            printf("%i\n", a);
        }

    }

    if (b > a && b > c)
    {
        if (a > c)
        {
            printf("%i\n", c);
            printf("%i\n", a);
            printf("%i\n", b);
        }

        if (c > a)
        {
            printf("%i\n", a);
            printf("%i\n", c);
            printf("%i\n", b);
        }
    }

    if (c > a && c > b)
    {
        if (a > b)
        {
            printf("%i\n", b);
            printf("%i\n", a);
            printf("%i\n", c);
        }

        if (b > a)
        {
            printf("%i\n", a);
            printf("%i\n", b);
            printf("%i\n", c);
        }
    }

    printf("\n");

    printf("%i\n", a);
    printf("%i\n", b);
    printf("%i\n", c);

    return 0;
}
