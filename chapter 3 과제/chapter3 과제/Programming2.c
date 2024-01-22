#include <stdio.h>

int main()
{
	float mile,meter;			//실수를 저장하는 2개의 변수

	printf("거리를 입력하시오(단위: 마일) : ");			//입력 안내 메시지
	scanf_s("%f", &mile);			//사용자로부터 마일값 입력

	meter = 1609.0 * mile;			//마일에 1609.0을 곱해서 미터값으로 변환

	printf("%.1f mi은 %.2f m 입니다",mile,meter);			//마일값을 미터값으로 변환한 값을 출력

	return 0;			//함수 결과값 반환
}