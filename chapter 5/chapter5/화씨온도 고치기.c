#include <stdio.h>

int main()
{
	double f_temp, c_temp;

	printf("ȭ���µ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &f_temp);

	c_temp = (double)5 / 9 * (f_temp - 32);

	printf("�����µ��� %.1lf�Դϴ�", c_temp);

	return 0;
}