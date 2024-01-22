#include <stdio.h>

int main()
{
	double x, y, result;

	printf("실수 2개를 입력하시오 : ");
	scanf_s("%lf %lf", &x, &y);

	result = x + y;
	printf("l%f + %lf = %f\n", x, y, result);

	result = x - y;
	printf("%lf - %lf = %f\n", x, y, result);

	result = x * y;
	printf("%lf * %lf = %f\n", x, y, result);

	result = x / y;
	printf("%lf / %lf = %f\n", x, y, result);
}