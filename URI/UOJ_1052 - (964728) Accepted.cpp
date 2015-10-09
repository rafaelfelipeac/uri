#include <stdio.h>

main()
{
    int i;

    scanf("%i", &i);

    if(i == 1)
        printf("January\n");
    else if(i==2)
        printf("February\n");
    else if(i==3)
        printf("March\n");
    else if(i==4)
        printf("April\n");
    else if(i==5)
        printf("May\n");
    else if(i==6)
        printf("June\n");
    else if(i==7)
        printf("July\n");
    else if(i==8)
        printf("August\n");
    else if(i==9)
        printf("September\n");
    else if(i==10)
        printf("October\n");
    else if(i==11)
        printf("November\n");
    else
        printf("December\n");

    return 0;

}
