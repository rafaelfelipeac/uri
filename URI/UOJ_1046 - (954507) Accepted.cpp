#include <stdio.h>
#include <stdlib.h>

main()

{
    int inicio, f, result;

    result=0;
    inicio=0;
    f=0;

    scanf("%i %i", &inicio, &f);

    if (f>inicio)
            result = f - inicio;
    else
            result = (24-inicio)+f;

    printf("O JOGO DUROU %i HORA(S)\n", result);

    return 0;
}
