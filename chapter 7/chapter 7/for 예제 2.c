#include <stdio.h>

int main()
{
	int i, sum = 0, n;

	printf(" n >> ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		sum += i;
		printf("i�� ���� %d�Դϴ�.\n", i);
	}


	printf("1���� n������ ������ �� = %d\n", sum);

	return 0;

}