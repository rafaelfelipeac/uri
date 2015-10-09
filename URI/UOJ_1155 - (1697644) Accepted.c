//S = 1 + 1 / 2 + 1 / 3 + … + 1 / 100
//0,5  0,33  0,25  0,2 1

#include <stdio.h>
#include <stdlib.h>

main()
{
	float i;
	float s=0;

	for (i = 1; i <= 100; i++) {
		if (i == 1)
			s = i;
		else
			s += 1 / i;
	}

	printf("%.2f\n", s);

	system("pause");
}1