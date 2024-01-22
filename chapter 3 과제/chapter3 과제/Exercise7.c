#include <stdio.h>

int main(void)
{
	float inch, mm;			//inch,mm이라는 실수를 저장하는 변수

	printf("인치 단위로 입력 : ");		//입력 안내 메시지 출력
	scanf_s("%f", &inch);				//하나의 실수를 받아서 inch에 저장

	mm = inch * 25.4;					//mm에 inch에 25.4를 곱한값을 저장

	printf("%f 인치 = %f mm", inch, mm);		//inch를 mm으로 변환한 값을 출력

	return 0;				//0을 외부로 반환
}