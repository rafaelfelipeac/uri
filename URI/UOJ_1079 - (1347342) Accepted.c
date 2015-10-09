#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, i, j, p;
	
	scanf("\n%i", &n);
	
	p=n-1;
	
	float a[p], b[p], c[p], m[p];
	
	for(i=0; i<n; i++)
		scanf("%f %f %f\n", &a[i], &b[i], &c[i]);
	
	for(j=0; j<(n); j++)
	{
		a[j]=(a[j]*20)/100;
		b[j]=(b[j]*30)/100;
		c[j]=(c[j]*50)/100;
		
		m[j] = (a[j]+b[j]+c[j]);
		
		//printf("%f %f %f\n",a[j],b[j],c[j]);
		printf("%.1f\n", m[j]);
	}
	
	return 0;
}1