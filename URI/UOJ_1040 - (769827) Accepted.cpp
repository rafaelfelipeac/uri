#include <stdio.h>
#include <stdlib.h>

main()

{
    float n1, n2, n3, n4, media, nexa, media2;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1*0.2) + (n2*0.3) + (n3*0.4) + (n4*0.1);

    printf("Media: %.1f\n", media);

    if (media >= 7)
    {
        printf("Aluno aprovado.\n");
    }

    if (media < 5)
    {
        printf("Aluno reprovado.\n");
    }

    if (media >= 5 && media <= 6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%f", &nexa);

        printf("Nota do exame: %.1f\n", nexa);

        media2 = (media + nexa) / 2;

        if (media2 >= 5)
        {
            printf("Aluno aprovado.\n");
        }

        if (media < 5)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media2);
    }


    return 0;
}
