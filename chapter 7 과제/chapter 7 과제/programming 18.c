#include <stdio.h>

int main() {
	int i, j;
	double result = 0;

	printf("���� ���� : ");
	scanf_s("%d", &i);

	for (j = 1; j <= i; j++) {
		result = result + (1. / j);
	}

	printf("������ �� : %lf", result);

	return 0;
}