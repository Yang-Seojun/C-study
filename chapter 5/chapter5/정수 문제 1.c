#include <stdio.h>

int main()
{
	int a, b, c, d;

	printf("�� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	c = a / b;
	d = a % b;

	printf("%d / %d = %d...%d", a, b, c, d);

	return 0;
}