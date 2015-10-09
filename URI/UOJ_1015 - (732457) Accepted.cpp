#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main()

{
    float x1, y1, x2, y2, calc;

    scanf("%f %f", &x1, &y1);

    scanf("%f %f", &x2, &y2);

    calc = ( (x2 - x1) * (x2 - x1) ) + ( (y2 - y1) * (y2 - y1) ) ;

    printf("%.4f\n", sqrt(calc) );

}
