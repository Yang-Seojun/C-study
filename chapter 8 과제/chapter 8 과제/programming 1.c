#include <stdio.h>
#include <math.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void) {
	int n;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	printf("even()의 결과 : %d\n", even(n));
	printf("absolute()의 결과 : %d\n", absolute(n));
	printf("sign()의 결과 : %d\n", sign(n));

	return 0;
}

int even(int n) {
	return ((n % 2 == 0) ? 1 : 0);
}

int absolute(int n) {
	return fabs(n);
}

int sign(int n) {
	return ((n < 0) ? -1 : ((n == 0) ? 0 : 1));
}