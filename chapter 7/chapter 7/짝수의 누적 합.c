#include <stdio.h>

int main()
{
	int i = 0, n, sum = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		if (i % 2 == 0) {
			sum += i;
		}
		i += 1;
	}

	printf("1���� %d������ ¦������ %d�Դϴ�.\n", n, sum);

	return 0;

}