#include <stdio.h>

int main()
{
	int num, x;
	double result = 1;

	printf("�Ǽ��� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);

	for (int i = 0; i < x; i++)
	{
		result *= num;
	}

	printf("������� %lf", result);

	return 0;
}