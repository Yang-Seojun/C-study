#include <stdio.h>

int main()
{
	int i = 1, sum = 0, n;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return 0;

}