#include <stdio.h>		//헤더 파일(stdio.h)을 소스ㅗ드 안에 포함시켜라

int main()				//main함수 정의
{
	int x, y;			//x,y라는 정수를 저장하는 변수

	scanf_s("%d %d", &x, &y);			//2개의 변수를 받아서 각각 x와 y에 저장
	printf("덧셈 : %d\n", x + y);		//입력받은 x와 y을 더한다
	printf("뺄셈 : %d\n", x - y);		//입력받은 x와 y을 뺀다
	printf("곱셈 : %d\n", x * y);		//입력받은 x와 y을 곱한다
	printf("나눗셈 : %d\n", x / y);		//입력받은 x와 y을 나눈다

	return 0;			//0을 외부로 반환

}