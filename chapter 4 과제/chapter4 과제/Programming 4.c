#include <stdio.h>

int main()
{
	double w, h, d, v;

	printf("������ ���� ���� ���̸� �ѹ��� �Է� : ");
	scanf_s("%lf %lf %lf", &w, &d, &h);

	v = w * d * h;

	printf("������ ���Ǵ� %.6lf�Դϴ�.",v);
}