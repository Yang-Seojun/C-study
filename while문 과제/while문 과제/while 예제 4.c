#include <stdio.h>

int main()
{
	int i = 1, n, sum = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		if (i % 2 == 0) sum += i;
		i++;
	}

	printf("1���� %d������ ¦���� ���� %d�Դϴ�.\n", n, sum);

	return 0;

}