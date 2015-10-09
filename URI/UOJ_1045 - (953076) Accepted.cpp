#include <stdio.h>
#include <stdlib.h>

main()
{
    float a, b, c, a2, b2, c2;

    int i;

    scanf("%f %f %f", &a2, &b2, &c2);

    if (a2 >= c2 && a2 >= b2)
    {
        a=a2;
        if(c2>=b2)
        {
            b=c2;
            c=b2;
        }
        if(b2>=c2)
        {
            b=b2;
            c=c2;
        }
    }
    if (b2 >= a2 && b2 >= c2)
    {
        a=b2;
        if(a2>=c2)
        {
            b=a2;
            c=c2;
        }
        if(c2>=a2)
        {
            b=c2;
            c=a2;
        }
    }
    if (c2>=a2 && c2>=b2)
    {
        a=c2;
        if(b2>=a2)
        {
            b=b2;
            c=a2;
        }
        if(a2>=b2)
        {
            b=a2;
            c=b2;
        }
    }

    if (a >= (b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if((a*a)==((b*b)+(c*c)))
        printf("TRIANGULO RETANGULO\n");

    else if((a*a)>((b*b)+(c*c)))
        printf("TRIANGULO OBTUSANGULO\n");

    else if((a*a)<((b*b)+(c*c)))
        printf("TRIANGULO ACUTANGULO\n");

    if(a == b && a == c && b == c)
        printf("TRIANGULO EQUILATERO\n");


    else if(a==b)
        printf("TRIANGULO ISOSCELES\n");
    else if(a==c)
        printf("TRIANGULO ISOSCELES\n");
    else if(b==c)
        printf("TRIANGULO ISOSCELES\n");




    return 0;
}
