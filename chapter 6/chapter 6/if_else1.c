#include <stdio.h>

int main()
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("�Էµ� ������ ¦���Դϴ�\n");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�\n");

	return 0;
}