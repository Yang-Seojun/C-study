#include <stdio.h>

int main()
{
	int a, b, c, d;

	printf("정수 2개를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	c = a / b;
	d = a % b;

	printf("몫 : %d\n", c);
	printf("나머지 : %d\n", d);

	return 0;
}