#include <stdio.h>

int main()
{
	int a, b, c, d;

	printf("두 정수를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	c = a / b;
	d = a % b;

	printf("%d / %d = %d...%d", a, b, c, d);

	return 0;
}