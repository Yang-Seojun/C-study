#include <stdio.h>

int main()
{
	int i, n;
	long fact = 1;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		fact *= i;
	}

	printf("%d�� %d�Դϴ�.\n", n, fact);

	return 0;

}