#include <stdio.h>

int check(int pw);

int main(void) {
	int pass;

	while (1) {
		printf("��й�ȣ : ");
		scanf_s("%d", &pass);

		if (check(pass) == 1) break;
	}

	return 0;
}

int check(int pw) {
	static int num = 1, pass = 1234;

	if (num == 3) {
		printf("�α��� �õ� Ƚ�� �ʰ�");

		return 1;
	}
	else if (pw != pass) {
		num++;

		return 0;
	}
	else if (pw == pass) return 1;
}