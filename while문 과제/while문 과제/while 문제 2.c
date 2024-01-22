#include <stdio.h>

int main()
{
	int base, height;
	double t_width;
	char cont;

	while (1)
	{
		printf("Base = ");
		scanf_s("%d", &base);
		printf("Height = ");
		scanf_s("%d", &height);
		t_width = base * height / 2.;
		printf("Triangle width = %.1lf\n", t_width);
		printf("Continue?");
		scanf_s(" %c", &cont);
		if (cont == 'N' || cont == 'n') break;
	}

	return 0;

}