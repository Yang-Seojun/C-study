#include <stdio.h>

int sum(int n);

int main(void) {
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	printf("1부터 %d까지의 합 = %d\n", num, sum(num));

	return 0; 
}

int sum(int n) {
	if (n == 1) return 1;
	else return (n + sum(n - 1));
}