#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, c, conta, contb, contc;
	float a, b, m;
	
	a=b=m=conta=contb=contc=c=0;
	
	do
	{
		contc=0;
		
		do
		{
			conta=0;
			scanf("%f", &a);
			fflush(stdin);
			
			if(a<0 || a>10)
			{
				printf("nota invalida\n");
				conta++;
			}
			
		} while(conta>0);
		
		
		do
		{
			contb=0;
			scanf("%f", &b);
			fflush(stdin);
			
			if(b<0 || b>10)
			{
				printf("nota invalida\n");
				contb++;
			}
			
		} while(contb>0);
		
		m=(a+b)/2;
		
		printf("media = %.2f\n", m);
		
		do
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%i", &c);
		
			if(c==2)
				contc++;
			//if(c==1)
				
		} while(c!=1 && c!=2);

		
	} while(contc<1);
	
	system("pause");
}










