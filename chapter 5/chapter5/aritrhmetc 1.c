#include <stdio.h>

int main()
{
	double x, y, result;

	printf("�Ǽ� 2���� �Է��Ͻÿ� : ");
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