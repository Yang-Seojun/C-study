#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main()
{
	double r, a, c;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);

	a = 4 * pi * r * r;

	printf("ǥ������ %.2lf�Դϴ�.\n", a);

	c = (4. / 3.) * pi * pow(r, 3.0);

	printf("ü���� %.2lf�Դϴ�.\n", c);
}