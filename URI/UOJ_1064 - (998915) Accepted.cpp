#include <stdio.h>

main()
{
    float a, b, c, d, e, f, ma, mb, mc, md, me , mf, posi, media;

    ma = 0;
    mb = 0;
    mc = 0;
    md = 0;
    me = 0;
    mf = 0;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    if(a > 0)
        ma = a;
    if(b > 0)
        mb = b;
    if(c > 0)
        mc = c;
    if(d > 0)
        md = d;
    if(e > 0)
        me = e;
    if(f > 0)
        mf = f;

    if (a > 0)
        posi++;
    if (b > 0)
        posi++;
    if (c > 0)
        posi++;
    if (d > 0)
        posi++;
    if (e > 0)
        posi++;
    if (f > 0)
        posi++;

    media = ma+mb+mc+md+me+mf;

    printf("%.0f valores positivos\n", posi);
    printf("%.1f\n", media/posi);

    return 0;
}
