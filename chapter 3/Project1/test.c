#include <stdio.h>

void main(void)
{
	int x;		// 첫 번째 정수를 저장할 변수
	int y;		//두 번째 정수를 저장할 변수
	int sum;	//두 정수의 합을 저장하는 변수

	x = 100;
	y = 200;

	sum = x + y;
	printf("두수의 합 : %d", sum);

	return 0;

}