#include <stdio.h>

int main(void)
{
	double num, result;				//실수를 저장하는 2개의 변수

	printf("실수를 입력하시오 : ");			//입력 안내 메시지
	scanf_s("%lf", &num);					//사용자로부터 화씨값 입력

	result = 3 * num * num + 7 * num + 11;			//다항식

	printf("다항식의 값은 %.2lf", result);			//사용자로부터 받은 실수로 다항식 결과 출력

	return 0;			//함수 결과값 반환
}