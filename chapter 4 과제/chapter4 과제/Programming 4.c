#include <stdio.h>

int main()
{
	double w, h, d, v;

	printf("상자의 가로 세로 높이를 한번에 입력 : ");
	scanf_s("%lf %lf %lf", &w, &d, &h);

	v = w * d * h;

	printf("상자의 부피는 %.6lf입니다.",v);
}