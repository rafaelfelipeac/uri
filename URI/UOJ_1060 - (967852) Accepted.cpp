#include <stdio.h>

main()
{
    int a, b, c, d, e, f, pos;

    pos = 0;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    scanf("%i", &e);
    scanf("%i", &f);

    if(a > 0)
        pos++;
    if(b > 0)
        pos++;
    if(c > 0)
        pos++;
    if(d > 0)
        pos++;
    if(e > 0)
        pos++;
    if(f > 0)
        pos++;

    printf("%i valores positivos\n", pos);

    return 0;
}
