#include <stdio.h>

int main(void)
{
	double weight_on_moon, weight_in_earth;					//실수를 저장하는 2개의 변수

	printf("몸무게를 입력하시오(단위: kg) : ");				//입력 안내 메시지
	scanf_s("%lf", &weight_in_earth);						//사용자로부터 지구에서 몸무게 입력

	weight_on_moon = weight_in_earth * 0.17;				//달에서의 몸무게 구하는 식

	printf("달에서의 몸무게는 %.2lfkg입니다", weight_on_moon);			//달에서의 몸무게 출력하기
}