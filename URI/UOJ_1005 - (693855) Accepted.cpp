#include <stdio.h>
#include <stdlib.h>

main()
{
	float a, b, media;
	
	scanf("%f", &a);
	scanf("%f", &b);
	
	printf("MEDIA = %.5f\n", ((a * 3.5) + (b * 7.5)) / 11 );
	
	system("pause");
	
}