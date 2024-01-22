#include <stdio.h>

int main()
{
	int base, height, area;			//정수를 저장하는 3개의 변수

	printf("삼각형의 밑변 : ");			//입력 안내 메시지
	scanf_s("%d", &base);				//사용자로부터 밑변값 입력

	printf("삼각형의 높이 : ");			//입력 안내 메시지
	scanf_s("%d", &height);			    //사용자로부터 높이값 입력

	area = 0.5 * base * height;			//넓이를 구하는 식

	printf("삼각형의 넓이는 %d 입니다.\n",area);			//입력받은 밑변과 높이로구한 넓이값 출력

	return 0;					//함수 결과값 반환
}