#include <Stdio.h>

int fib(int n);

int main(void) {
	int num;

	printf("몇번째 숫자까지 출력할까요 : ");
	scanf_s("%d", &num);

	for (int i = 0; i <= num; i++) {
		printf("fib(%d) = %d\n", i, fib(i));
	}

	return 0;
}

int fib(int n) {
	if (n == 0) return 0;
	else if (n == 1)return 1;
	else return fib(n - 1) + fib(n - 2);
}