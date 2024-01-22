#include <stdio.h>

int main()
{
	int a, b, x, y, r;

	printf("두개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	x = a > b ? a : b;
	y = a < b ? a : b;

	while (y)						// while (y != 0) 와 같다
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("최대 공약수는 %d입니다.\n", x);

	return 0;

}