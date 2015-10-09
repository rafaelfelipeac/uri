#include <stdio.h>
#include <stdlib.h>

main()
{
	int gr, in, q, vgr, vin, emp, c;
	
	gr=in=q=vgr=vin=emp=c=0;
	
	do
	{
		c=0; 
		
		scanf("%i %i", &in, &gr);
		fflush(stdin);
		
		if(gr>in)
			vgr++;
		if(in>gr)
			vin++;
		if(in==gr)
			emp++;
		q++;	
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%i", &c);
		fflush(stdin);	
	} while(c==1);
	
	printf("%i grenais\n", q);
	
	printf("Inter:%i\n", vin);
	printf("Gremio:%i\n", vgr);
	printf("Empates:%i\n", emp);	
	
	if(vgr>vin)
		printf("Gremio venceu mais\n");
	if(vin>vgr)
		printf("Inter venceu mais\n");
		
	system("pause");
}1