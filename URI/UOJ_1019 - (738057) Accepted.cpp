#include <stdio.h>
#include <stdlib.h>

main()

{
    int n, horas, minutos, segundos;

    scanf("%i", &n);

    horas = 0;
    minutos = 0;
    segundos = 0;

    minutos = n / 60;
    n = n - (minutos * 60);

    segundos = n;

    horas = minutos / 60;

    if (minutos >=60)
    {
        minutos = minutos - 60;

    }

    printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;

}
