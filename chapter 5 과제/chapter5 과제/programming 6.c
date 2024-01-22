#include <stdio.h>
#include <math.h>

int main()
{
	int result;
	double a, b;
	a = 1.0 - 0.9;
	b = 0.1;

	result = fabs(a - b) < 1e-9;

	printf("(1.0 - 0.9) == 0.1은 %d 입니다.\n", result);
}