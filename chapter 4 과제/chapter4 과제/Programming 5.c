#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main()
{
	double m2,s_meter;

	printf("���� �Է��ϼ��� : ");
	scanf_s("%lf", &m2);
	
	s_meter = m2 * SQMETER_PER_PYEONG;

	printf("%lf�������Դϴ�.", s_meter);
}