#include <stdio.h>

int main()
{
	double E, m, v;

	printf("����(kg) : ");
	scanf_s("%lf", &m);

	printf("�ӵ�(m/s) : ");
	scanf_s("%lf", &v);

	E = m * v * v / 2.0;
	
	printf("�������(J) : %lf", E);
	
	return 0;
}