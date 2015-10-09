#include <stdio.h>
#include <stdlib.h>

main()

{
    int hi, mi, hf, mf, x, y;

    hi=0;
    mi=0;
    hf=0;
    mf=0;
    x=0;
    y=0;

    scanf("%i %i %i %i", &hi, &mi, &hf, &mf);

    //HORAS

    if (hf > hi)
        x = hf - hi;
    else
        x = (24 - hi) + hf;


    //MINUTOS

    if(mf > mi)
        y = mf - mi;
    else
        y = (60 - mi)+ mf;

    if(y == 60)
    {
        y = y - 60;
    }

    if (hf > hi && mf > mi)
    {
        x=hf-hi;
        y=mf-mi;
    }

    if(hf > hi && mi > mf)
    {
        x = (hf-hi)-1;
    }

    if (hi == hf && mf > mi)
    {
        x = 0;
        y = mf-mi;
    }

    if(hi==hf && mf < mi)
    {
        x = 23;
        y = 60-(mi-mf);
    }

    if(hi==hf && mi==mf)
    {
        x=24;
        y=0;
    }

    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", x, y);

    return 0;
}
