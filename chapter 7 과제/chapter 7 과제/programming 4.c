#include <stdio.h>

int main()
{
	int num, result;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("��� : ");

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}