#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int a1, a2, b1, b2, b3, b4, c1, c2, c3, c4, c5, c6, c7, c8;

    char p1[20], p2[20], p3[20];
    char vertebrado[] = "vertebrado";
    char ave[] = "ave";
    char carnivoro[] = "carnivoro";
    char onivoro[] = "onivoro";
    char mamifero[] = "mamifero";
    char herbivoro[] = "herbivoro";
    char invertebrado[] = "invertebrado";
    char inseto[] = "inseto";
    char hematofago[] = "hematofago";
    char anelideo[] = "anelideo";


    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);

    a1 = strcmp (p1, vertebrado);
    a2 = strcmp (p1, invertebrado);
    b1 = strcmp (p2, ave);
    b2 = strcmp (p2, mamifero);
    b3 = strcmp (p2, inseto);
    b4 = strcmp (p2, anelideo);
    c1 = strcmp (p3, carnivoro);
    c2 = strcmp (p3, onivoro);
    c3 = strcmp (p3, onivoro);
    c4 = strcmp (p3, herbivoro);
    c5 = strcmp (p3, hematofago);
    c6 = strcmp (p3, herbivoro);
    c7 = strcmp (p3, hematofago);
    c8 = strcmp (p3, onivoro);


    if(a1 == 0)
    {
        if(b1 == 0)
        {
            if(c1 == 0)
            {
                printf("aguia\n");
            }
            if(c2==0)
            {
                printf("pomba\n");
            }
        }
        if(b2 == 0)
        {
            if(c3==0)
            {
                printf("homem\n");
            }
            if(c4==0)
            {
                printf("vaca\n");
            }
        }
    }
    if(a2 == 0)
    {
        if(b3 == 0)
        {
            if(c5 == 0)
            {
                printf("pulga\n");
            }
            if(c6 ==0)
            {
                printf("lagarta\n");
            }
        }
        if(b4 == 0)
        {
            if(c7 == 0)
            {
                printf("sanguessuga\n");
            }
            if(c8 == 0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
