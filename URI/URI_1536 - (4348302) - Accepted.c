#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, n, time1, time2, gt1, gt2, sgt1, sgt2, gfdct1, gfdct2;
	char c;
	
	scanf("%i", &n);
	fflush(stdin);
	
	for(i=0; i<n; i++)
	{
		time1 = time2 = gt1 = gt2 = sgt1 = sgt2 = gfdct1 = gfdct2 = 0;
		
		scanf("%i %c %i", &gt1, &c, &gt2);
		fflush(stdin);
		
		sgt1 += gt1;
		sgt2 += gt2;
		gfdct2 += gt2;
		
		if(gt1 > gt2)
			time1+=3;
		else if(gt2 > gt1)
			time2+=3;
		else 
		{
			time1++;
			time2++;
		}
		gt1 = gt2 = 0;
		
		scanf("%i %c %i", &gt2, &c, &gt1);
		fflush(stdin);
		
		sgt1 += gt1;
		sgt2 += gt2;
		gfdct1 += gt1;
		
		if(gt1 > gt2)
			time1+=3;
		else if(gt2 > gt1)
			time2+=3;
		else 
		{
			time1++;
			time2++;
		}
		gt1 = gt2 = 0;
		
		//printf("Time1 - %i pontos\n", time1);
		//printf("Time2 - %i pontos\n", time2);
		
		
		if(time1 > time2)
			printf("Time 1\n");
		else if(time2 > time1)
			printf("Time 2\n");
		else 
		{
			int saldot1, saldot2;
			
			saldot1 = sgt1 - sgt2;
			saldot2 = sgt2 - sgt1;
			
			if(saldot1 > saldot2)
				printf("Time 1\n");
			else if(saldot2 > saldot1)
				printf("Time 2\n");
			else
			{
				if(gfdct1 > gfdct2)
					printf("Time 1\n");
				else if(gfdct2 > gfdct1)
					printf("Time 2\n");
				else 
					printf("Penaltis\n");
			}
		}
	}

	system("pause");
}