//월수령액을 계산하는 프로그램
#include <stdio.h>

int main()
{
	int ysalary, msalary;		//연봉, 월 수령액

	printf("연봉을 입력하시오 (단위:만원) : ");		//안내 메시지 출력
	scanf_s("%d", &ysalary);						//하나의 정수를 받아 연봉에 저장

	msalary = ysalary / 12;			//연봉을 12로 나눠서 월수령액 계산
	printf("월수령액 (단위:만원) : %d\n", msalary);

	return 0;
}