#include <stdio.h>

int main()
{
	float year,million;				//실수를 저장하는 2개의 변수

	printf("연봉을 입력하세요(단위: 만원) : ");		//입력 안내 메시지
	scanf_s("%f", &year);			//사용자로부터 연봉입력

	million = 100000 / year;			//10억을 모으는데 걸리는 시간 

	printf("10억을 모으는데 걸리는 시간(단위: 시간) : %.2f", million);			//10억을 모으는데 걸리는 시간을 소수점 2번째까지 출력

	return 0;			//함수 결과값 반환
}