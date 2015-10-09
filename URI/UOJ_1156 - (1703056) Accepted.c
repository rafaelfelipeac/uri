#include <stdio.h>
#include <stdlib.h>


main()
{
	float i, s = 0, a = 0, t=0, cont=0;
	
	a = 2;

	s = 1;
	
	for (i = 3; i <= 39; i+=2) {
		if (i == 3) {
			s += i / a;
			//printf("%f -- %f\n", i, a);
			//printf("%.2f\n", s);
		}
		else {
			a *= 2;
			s += i / a;
			//printf("%f -- %f\n", i, a);
			//printf("%.2f\n", s);
		}
	}

	//s += 39; 



	printf("%.2f\n", s);

	system("pause");
}1