#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()

{
    float a, b, c, peri, area;

    scanf("%f %f %f", &a, &b, &c);

    if (a < (b+c) && c < (a+b) && b < (a+c))
    {
        peri = (a + b + c);
        printf("Perimetro = %.1f\n", peri);
    }
    else
    {
        area = ((a+b)*c)/2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
