#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, t;
	float perc=0, pc=0, pr=0, ps=0, co=0, ra=0, sa=0, total=0;;
	char le;
	
	scanf("%i", &t);
	
	float n[t-1];
	
	for(i=0; i<t; i++)
	{
		scanf("%f %c", &n[i], &le);
		
		if(le =='C')
			co+=n[i];
		if(le=='R')
			ra+=n[i];
		if(le=='S')
			sa+=n[i];
			
		total=(co+ra+sa);		
	}
	
	//perc = total/100;
	 
	//pc=co/perc;
	//pr=ra/perc; 
	//ps=sa/perc;
	
	printf("Total: %.0f cobaias\n", total);
	printf("Total de coelhos: %.0f\n", co);
	printf("Total de ratos: %.0f\n", ra);
	printf("Total de sapos: %.0f\n", sa);
	printf("Percentual de coelhos: %.2f %%\n", co/(total/100));
	printf("Percentual de ratos: %.2f %%\n", ra/(total/100));
	printf("Percentual de sapos: %.2f %%\n", sa/(total/100));
	
	return 0;
}1