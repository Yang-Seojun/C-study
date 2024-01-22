#include <stdio.h>

int main()
{
	int x, y;

	printf("x 좌표를 입력하시오 : ");
	scanf_s("%d", &x);

	printf("y 좌표를 입력하시오 : ");
	scanf_s("%d", &y);

	(x > 0 && y > 0) ? printf("1사분면입니다.") : (x > 0 && y < 0) ? printf("4사분면입니다.") : (x < 0 && y > 0) ? printf("2사분면입니다.") : printf("3사분면입니다.");
}