#include <stdio.h>
#include <stdlib.h>

main()
{
    int i;

    for(i=1; i <= 100; i++)
        if(i % 2 == 0)
            printf("%i\n", i);

    return 0;
}