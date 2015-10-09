#include <stdio.h>
#include <stdlib.h>

main()
{
	float x=0, y=0, m=0, contx=0, conty=0;
	int i;
		
		do
		{
			contx=0;
			scanf("%f", &x);
			
			if(x<0 || x>10)
				printf("nota invalida\n");
			else 
			    contx++;
			    
		} while(contx < 1);
		
		do
		{
			conty=0;
			scanf("%f", &y);
			
			if(y<0 || y>10)
				printf("nota invalida\n");
			else 
				conty++;

		} while(conty < 1);
	
	m=(x+y)/2;
	
	printf("media = %.2f\n", m);
	
	system("pause");
}1