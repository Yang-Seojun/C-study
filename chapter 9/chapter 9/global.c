#include <stdio.h>

//���� ������ �ڵ����� 0���� �ʱ�ȭ �ȴ�.
//���� ������ ���� ������ �̸��� ���� �ܿ�, ���� ������ �����ȴ�.
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