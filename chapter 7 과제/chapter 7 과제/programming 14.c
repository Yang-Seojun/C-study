#include <stdio.h>

int main() {
	int a = 0, b = 1, c, num, i;

	printf("���° �ױ��� ���ұ��? ");
	scanf_s("%d", &num);

	for (i = 0; i <= num; i++) {
		if (i == 0) {
			printf("%d, ", a);
		}
		else if (i == 1) {
			printf("%d, ", b);
		}
		else {
			c = a + b;
			printf("%d, ", c);
			a = b;
			b = c;
		}
	}

	return 0;
}