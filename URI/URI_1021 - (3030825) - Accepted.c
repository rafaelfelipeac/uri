#include <stdio.h>
#include <stdlib.h>
 
main()
 
{
    int c100, c50, c20, c10, c5, c2, m1, m050, m025, m010, m005, m001;
    double n;
 
 
    scanf("%lf", &n);
 
    c100 = n / 100;
    n = n - (c100 * 100);
 
    c50 = n / 50;
    n = n - (c50 * 50);
 
    c20 = n / 20;
    n = n - (c20 * 20);
 
    c10 = n / 10;
    n = n - (c10 * 10);
 
    c5 = n / 5;
    n = n - (c5 * 5);
 
    c2 = n / 2;
    n = n - (c2 * 2);
 
 
    m1 = n / 1;
    n = n - (m1 * 1);
 
    m050 = n / 0.50;
    n = n - (m050 * 0.50);
 
    m025 = n / 0.25;
    n = n - (m025 * 0.25);
 
    m010 = n / 0.10;
    n = n - (m010 * 0.10);
 
    m005 = n / 0.05;
    n = n - (m005 * 0.05);
 
    m001 = n / 0.01;
    n = n - (m001 * 0.01);
 
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", c100);
    printf("%i nota(s) de R$ 50.00\n", c50);
    printf("%i nota(s) de R$ 20.00\n", c20);
    printf("%i nota(s) de R$ 10.00\n", c10);
    printf("%i nota(s) de R$ 5.00\n", c5);
    printf("%i nota(s) de R$ 2.00\n", c2);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", m1);
    printf("%i moeda(s) de R$ 0.50\n", m050);
    printf("%i moeda(s) de R$ 0.25\n", m025);
    printf("%i moeda(s) de R$ 0.10\n", m010);
    printf("%i moeda(s) de R$ 0.05\n", m005);
    printf("%i moeda(s) de R$ 0.01\n", m001);
 
 
    return 0;
}