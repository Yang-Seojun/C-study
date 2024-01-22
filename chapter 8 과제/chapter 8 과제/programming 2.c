#include <stdio.h>

int multiple(int n, int m);

int main(void){
	int num1, num2;

	printf("첫 번째 정수를 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("두 번째 정수를 입력하시오 : ");
	scanf_s("%d", &num2);

	multiple(num1, num2);

	return 0;
}

int multiple(int n, int m) {
	((n % m == 0) ? printf("%d은 %d의 배수입니다.", n, m) : printf("%d은 %d의 배수가 아닙니다.", n, m));
}