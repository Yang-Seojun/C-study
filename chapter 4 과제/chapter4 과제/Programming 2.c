#include <stdio.h>

int main()
{
	int a;

	printf("16���� ������ �Է��Ͻÿ� : ");
	scanf_s("%x", &a);

	printf("8�����δ� %#o�Դϴ�.\n", a);
	printf("10�����δ� %d�Դϴ�.\n", a);
	printf("16�����δ� %#x�Դϴ�.\n", a);

	return 0;
}