#include <stdio.h>
#define pi 3.1415

int main()
{
	double s_to_a, s_a_angle, ealth_r;

	printf("�Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &s_to_a);

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &s_a_angle);

	ealth_r = s_to_a * (360 / s_a_angle) / (2 * pi);

	printf("������ �������� %.2lf�Դϴ�.", ealth_r);

	return 0;

}