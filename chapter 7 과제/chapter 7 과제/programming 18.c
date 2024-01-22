#include <stdio.h>

int main() {
	int i, j;
	double result = 0;

	printf("항의 개수 : ");
	scanf_s("%d", &i);

	for (j = 1; j <= i; j++) {
		result = result + (1. / j);
	}

	printf("수열의 합 : %lf", result);

	return 0;
}