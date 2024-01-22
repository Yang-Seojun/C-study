// 나머지 연산자 프로그램
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main()
{
	int input, h, m, s;
	printf("초를 입력하시오 : ");
	scanf_s("%d", &input);

	s = input % SEC_PER_MINUTE;
	m = input / SEC_PER_MINUTE % SEC_PER_MINUTE;
	h = input / (SEC_PER_MINUTE * SEC_PER_MINUTE);
	
	printf("%d초는 %d시간 %d분 %d초입니다.\n", input, h, m, s);
}