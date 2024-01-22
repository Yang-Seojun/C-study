#include <stdio.h>

int main(void)
{
	double fahrenheit, celsius;					//실수를 저장하는 2개의 변수

	printf("화씨 온도를 입력하시오 : ");		//입력 안내 메시지
	scanf_s("%lf", &fahrenheit);							//사용자로부터 화씨값 입력

	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);				//화씨값을 섭씨값으로 바꿔주는 식

	printf("섭씨값은 %.2lf도 입니다.\n", celsius);		//화씨값을 섭씨값으로 변환하여 출력

	return 0;					//함수 결과값 반환
}