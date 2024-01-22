#include <stdio.h>
#define pi 3.1415

int main()
{
	double s_to_a, s_a_angle, ealth_r;

	printf("거리를 입력하시오 : ");
	scanf_s("%lf", &s_to_a);

	printf("각도를 입력하시오 : ");
	scanf_s("%lf", &s_a_angle);

	ealth_r = s_to_a * (360 / s_a_angle) / (2 * pi);

	printf("지구의 반지름은 %.2lf입니다.", ealth_r);

	return 0;

}