#include <stdio.h>	

int get_int();
int is_prime(int n);

int main() {
	int n;
	n = get_int();
	for (int i = 2; i <= n; i++) {
		if (is_prime(i) == 1)
			printf("%d ", i);
	}

	return 0;
};

int get_int() {
	int n;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	return n;
}

int is_prime(int n) {

	int i;

	for (i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}

	return 1;
}