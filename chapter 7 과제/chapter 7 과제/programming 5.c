#include <stdio.h>

int main()
{
	int num, x;
	double result = 1;

	printf("실수의 값을 입력하시오 : ");
	scanf_s("%d", &num);

	printf("거듭 제곱 횟수를 입력하시오 : ");
	scanf_s("%d", &x);

	for (int i = 0; i < x; i++)
	{
		result *= num;
	}

	printf("결과값은 %lf", result);

	return 0;
}