#include <stdio.h>

int main()
{
	int a, b, x, y, r;

	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	x = a > b ? a : b;
	y = a < b ? a : b;

	while (y)						// while (y != 0) �� ����
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("�ִ� ������� %d�Դϴ�.\n", x);

	return 0;

}