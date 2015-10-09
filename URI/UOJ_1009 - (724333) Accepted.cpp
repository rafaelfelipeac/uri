#include <stdio.h>
#include <stdlib.h>

main()

{
    float salariofixo, totaldevendas;
    char nome[20];

    
    gets(nome);


   
    scanf("%f", &salariofixo);

   
    scanf("%f", &totaldevendas);

    printf("TOTAL = R$ %.2f\n", salariofixo + ( (totaldevendas * 15) / 100) );

    return 0;

}
