#include <stdio.h>

int main()
{
	double c_hight, c_distance, p_hight, p_distance;

	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &c_hight);

	printf("������ �׸����� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &c_distance);

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &p_distance);

	p_hight = p_distance * c_hight / c_distance;

	printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.", p_hight);
}