#include <stdio.h>

int main()
{
	double c_hight, c_distance, p_hight, p_distance;

	printf("지팡이의 높이를 입력하시오 : ");
	scanf_s("%lf", &c_hight);

	printf("지팡이 그림자의 길이를 입력하시오 : ");
	scanf_s("%lf", &c_distance);

	printf("피라미드까지의 거리를 입력하시오 : ");
	scanf_s("%lf", &p_distance);

	p_hight = p_distance * c_hight / c_distance;

	printf("피라미드의 높이는 %.2lf입니다.", p_hight);
}