#include <stdio.h>
#include <math.h>

#define PI 3.141592

int cal_area(double radius);

int main(void) {
	double radius;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &radius);

	cal_area(radius);

	return 0;
}

int cal_area(double radius) {
	double result;

	result = pow(radius, 2) * PI;

	printf("���� ������ %.2lf�Դϴ�.", result);
}