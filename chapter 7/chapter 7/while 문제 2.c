#include <stdio.h>

int main()
{
	int base, height;
	double with;
	char cont;

	while (1) 
	{
		printf("Base : ");
		scanf_s("%d", &base);

		printf("Height : ");
		scanf_s("%d", &height);

		with = base * height / 2.;

		printf("Trinangle width : %.1lf\n", with);

		printf("Continue?  ");
		scanf_s(" %c", &cont);

		if (cont != 'Y' && cont != 'y') break;						// if (cont == 'Y' || cont == 'y') continue;  else  break;A

	}

	return 0;

}