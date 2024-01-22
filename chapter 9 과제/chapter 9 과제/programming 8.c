#include <stdio.h>

double result(int n);

int main(void) {
	int num;

	printf("n을 입력해주세요 : ");
	scanf_s("%d", &num);

	double sol = result(num);

	printf("%lf\n", sol);

	return 0;
}

double result(int n) {
	if (n == 0) {
		return 0.0;
	}
	else {
		return 1.0 / n + result(n - 1);
	}
}