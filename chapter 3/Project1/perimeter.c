/*������� ���̿� �ѷ����� ���ϱ�*/
#include <stdio.h>

int main(void)
{
	double w;
	double h;
	double area;
	double perimenter;

	w = 10.0;
	h = 5.0;
	area = w * h;
	perimenter = 2 * (w + h);

	printf("�簢���� ���� : %lf\n", area);
	printf("������� �ѷ� : %lf\n", perimenter);

	return 0;

}