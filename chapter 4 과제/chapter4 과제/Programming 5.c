#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main()
{
	double m2,s_meter;

	printf("평을 입력하세요 : ");
	scanf_s("%lf", &m2);
	
	s_meter = m2 * SQMETER_PER_PYEONG;

	printf("%lf평방미터입니다.", s_meter);
}