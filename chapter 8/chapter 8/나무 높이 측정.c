#include <stdio.h>
#include <math.h>

#define PI 3.141592

double D2R(int degree) {
	double radians;
	
	radians = degree * (PI / 180.);

	return radians;
}

int main(void) {
	double heighe, distance, tree_height, degrees;

	printf("���������� �Ÿ�: ");
	scanf_s("%lf", &distance);

	printf("�������� Ű(����: ����): ");
	scanf_s("%lf", &heighe);

	printf("����(����: ��): ");
	scanf_s("%lf", &degrees);

	tree_height = tan(D2R(degrees)) * distance + heighe;
	printf("������ ����(����: ����): %.2lf", tree_height);

	//��������



	return 0;
}