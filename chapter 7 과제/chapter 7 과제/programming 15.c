#include <stdio.h>

int main() {
	int n, r, num_1 = 1, num_2 = 1, result = 1;

	printf("n�� �� : ");
	scanf_s("%d", &n);

	printf("r�� �� : ");
	scanf_s("%d", &r);

	for (int i = 1; i <= n; i++) {
		num_1 *= i;
	}

	for (int j = 1; j <= n - r; j++) {
		num_2 *= j;
	}

	result = num_1 / num_2;

	printf("������ ���� %d�Դϴ�.", result);

	return 0;
}