#include <stdio.h>
#include <stdlib.h>

main()

{
    int x = 60, y = 90, d;

    scanf("%i",&d);

    printf("%i minutos\n", ( ( (y*d) - (x*d) ) + (y*d) ) / 60 );

    return 0;

}
