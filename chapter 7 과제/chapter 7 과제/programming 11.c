#include <stdio.h>

int main() {
	int L, num = 0;

	for (L = 100; L <= 500; ) {
		printf("���� ���ᷮ : %d\n", L);
		if (L < 20)
			printf("(���) ���ᰡ 20���� �̸��Դϴ�.\n");
		printf("���� ������ +, �Ҹ�� -�� �Է����ּ��� : ");
		scanf_s("%d", &num);
		L += num;
		printf("\n");
	}
}