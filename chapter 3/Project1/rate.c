#include <stdio.h>

int main()
{
	double rate;		// 원/달러 환율
	double usd;			//달러화
	double krw;			//원화는 정수형 변수로 선언

	printf("환율을 입력하시오 : ");			//입려 안내 메시지
	scanf_s("%lf", &rate);					//사용자로부터 환율 입력

	printf("원화 금액을 입력하시오 : ");		//입력 안내 메시지
	scanf_s("%d", &krw);

	usd = krw / rate;		//달러화로 환산

	printf("원화 %d원은 %lf달러입니다.\n", krw, usd);			//계산 결과 출력

	return 0;			//함수 결과
}