#include <stdio.h>

int main()
{
	int i = 1, n, sum = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		sum += i;
		i++;

		printf("���� ���� %d \n", sum);
	}

	printf("\n1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	
	return 0;
}