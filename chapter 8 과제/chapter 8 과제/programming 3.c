#include <stdio.h>

int get_bigger(double n, double m);

int main(void) {
	double num1, num2;

	printf("두 실수를 입력하시오 : ");
	scanf_s("%lf %lf", &num1, &num2);

	get_bigger(num1, num2);

	return 0;
}

int get_bigger(double n, double m) {
	printf("큰 수는 %.1lf입니다.", ((n > m) ? n : m));
}