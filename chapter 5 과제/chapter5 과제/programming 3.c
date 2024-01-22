#include <stdio.h>

int main()
{
	int a, b, c, num;

	printf("정수 3개를 입력하시오 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	num = ((a > b && a > c) ? a : ((b > a && b > c) ? b : c));

	printf("최대값은 %d입니다", num);

}