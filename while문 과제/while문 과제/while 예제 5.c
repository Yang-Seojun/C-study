#include <stdio.h>

int main()
{
	int i = 1, n, sum = 0;

	while (i <= 5)
	{
		printf("���� �Է��Ͻÿ� : ");
		scanf_s("%d", &n);
		sum += n;
		i++;
	}

	printf("�հ�� %d�Դϴ�.\n", sum);

	return 0;

}