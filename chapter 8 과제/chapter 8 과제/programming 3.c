#include <stdio.h>

int get_bigger(double n, double m);

int main(void) {
	double num1, num2;

	printf("�� �Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &num1, &num2);

	get_bigger(num1, num2);

	return 0;
}

int get_bigger(double n, double m) {
	printf("ū ���� %.1lf�Դϴ�.", ((n > m) ? n : m));
}