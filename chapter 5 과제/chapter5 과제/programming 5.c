#include <stdio.h>

int main() 
{
	int num, ten, one;

	printf("정수를 입력하시오 (100미만의 정수) : ");
	scanf_s("%d", &num);

	ten = num / 10;
	one = num % 10;

	(num > 99) ? (printf("숫자가 너무 큼니다")) : (printf("십의 자리 : %d\n일의 자리 : %d", ten, one));
}