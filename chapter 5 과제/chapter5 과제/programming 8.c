#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main()
{
	double r, a, c;

	printf("구의 반지름을 입력하시오 : ");
	scanf_s("%lf", &r);

	a = 4 * pi * r * r;

	printf("표면적은 %.2lf입니다.\n", a);

	c = (4. / 3.) * pi * pow(r, 3.0);

	printf("체적은 %.2lf입니다.\n", c);
}