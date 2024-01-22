#include <stdio.h>

//전역 변수는 자동으로 0으로 초기화 된다.
//지역 변수와 전역 변수가 이름이 같은 겨우, 지역 변수가 참조된다.
int A;
int B;

int add() {
	return A + B;
}

int main(void) {
	int answer;

	A = 5;
	B = 7;

	answer = add();

	printf("%d + %d = %d", A, B, answer);

	return 0;
}