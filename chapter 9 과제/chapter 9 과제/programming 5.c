#include <stdio.h>

int sum(int n);

int main(void) {
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("1���� %d������ �� = %d\n", num, sum(num));

	return 0; 
}

int sum(int n) {
	if (n == 1) return 1;
	else return (n + sum(n - 1));
}