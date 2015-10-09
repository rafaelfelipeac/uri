#include <stdio.h>
#include <stdlib.h>
 
main()
{
    double raio=0, area=0;//pi=3.14159, raio;
     
    scanf("%lf", &raio);
    
    area = 3.14159 * (raio*raio);
     
    printf("A=%.4f\n", area);
     
    system("pause");
}1