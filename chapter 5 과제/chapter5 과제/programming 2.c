#include <stdio.h>

int main()
{
	double a, b, c, d, e, f;

	printf("실수를 입력하시오 : ");
	scanf_s("%lf %lf", &a, &b);

	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;

	printf("%.2lf %.2lf %.2lf %.2lf", c, d, e, f);

	return 0;
}